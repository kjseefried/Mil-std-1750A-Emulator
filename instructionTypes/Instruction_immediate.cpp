#include <iostream>
#include <sstream>
#include <iomanip>

#include "Instruction_immediate.h"
namespace {
  const unsigned int immediateSize = 2;
}

Instruction_immediate::Instruction_immediate(opCodeRange opcode, 
                                             char ocex,
                                             const std::string & opcodeStr, 
                                             const std::string & description) :
AbstractInstruction(immediateSize, 
                    opcode, 
                    ocex,
                    opcodeStr, 
                    description)
{

}
Instruction_immediate::~Instruction_immediate()
{
}

void Instruction_immediate::execute() const
{
  if (operation())
  {
    operation()->execute_immediate(gr1(), data());
  }
  else 
  {
    std::cout << "No operation defined " << opcode_str()  << std::endl;
  }
}

std::string Instruction_immediate::details() const
{
  std::ostringstream os;
  os << std::hex << std::setfill('0') << std::uppercase << "GR(" << std::setw(2) << gr1() << "), DATA(" << std::setw(4) << data() << ")"; 
  return os.str();
}

//std::ostream & operator<<(std::ostream & os, const Instruction_immediate & instruction)
//{
//  os << instruction.string();
//  return os;
//}
