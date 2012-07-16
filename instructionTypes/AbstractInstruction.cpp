#include "AbstractInstruction.h"
#include "AbstractOperation.h"
#include <sstream>
#include <iomanip>


AbstractInstruction::AbstractInstruction(unsigned short int size, opCodeRange opcode, char ocex, const std::string & opcodeStr, const std::string & description) :
m_size(size),
m_position(0),
m_opcodeRange(opcode),
m_ocex(ocex),
m_opcodeStr(opcodeStr),
m_description(description),
m_operation(0)
{
  m_data = new Value_i16 [m_size];
}

AbstractInstruction::~AbstractInstruction() 
{
  delete [] m_data;
  delete m_operation;
}
unsigned short AbstractInstruction::ocex(unsigned short int instr) const
{
  return 0 ;
}
void AbstractInstruction::clear() 
{
  m_position = 0;

}
void AbstractInstruction::setData(const Value_i16 & data) const
{
  m_data[m_position++] = data;
}
void AbstractInstruction::execute() const
{
  m_position = 0;
  if (m_operation) m_operation->execute();
}

std::string AbstractInstruction::data() const
{
  std::ostringstream os;
  for (unsigned int i = 0; i < m_size ; i++)
  {
    os << std::hex << std::setfill('0') << std::setw(4) << std::uppercase << m_data[i].value();
  }
  return os.str();
}

std::string AbstractInstruction::details() const
{
  return "Not defined." ;
}

