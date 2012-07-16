#include "AbstractOperation.h"
#include "ComponentRegistry.h"

Value_i16 AbstractOperation::s_nullValue;

AbstractOperation::AbstractOperation(const std::string & opName) :
m_name(opName),
m_v1(0),
m_v2(0),
m_da(0),
m_statusWord(ComponentRegistry::instance().statusWord()),
m_interruptMask(ComponentRegistry::instance().interruptMask()),
m_pendingInterrupts(ComponentRegistry::instance().pendingInterrupts()),
m_processor(ComponentRegistry::instance().processor()),
m_faults(ComponentRegistry::instance().faults()),
m_instructionCounter(ComponentRegistry::instance().instructionCounter()),
m_memory(ComponentRegistry::instance().memory()),
m_registerBank(ComponentRegistry::instance().registerBank()),
m_pageRegisters(ComponentRegistry::instance().pageRegisters())
{
}

AbstractOperation::~AbstractOperation() 
{
}

void AbstractOperation::print() const
{
  std::cout << *this << std::endl;
}

void AbstractOperation::execute() const
{
  std::cout << "No operation defined.. " << m_name << std::endl;
}

void AbstractOperation::execute_register2Register(unsigned short r1, unsigned short r2)
{
  m_v1 = &r1;
  m_v2 = &r2;
  m_leftArg = &(m_registerBank.start()[r1])->valueRef();
  m_rightArg = &(m_registerBank.start()[r2])->valueRef();

  Value_i32 v32_1 ((m_registerBank.start()[r1])->valueRef(), (m_registerBank.start()[r1 + 1])->valueRef());
  Value_i32 v32_2 ((m_registerBank.start()[r2])->valueRef(), (m_registerBank.start()[r2 + 1])->valueRef());

  m_leftArg32  = &v32_1;
  m_rightArg32 = &v32_2;

  execute();
}
void AbstractOperation::execute_baseRelative(unsigned short r1, unsigned short r2, unsigned short displ)
{
  m_v1 = &r1;
  m_v2 = &r2;
  m_leftArg = &(m_registerBank.start()[r1])->valueRef();
  Value_i16 v = m_registerBank.start()[r2]->read() + displ;
  m_rightArg = &(m_memory.readRef(v)); 

  Value_i32 v32_1 ((m_registerBank.start()[r1])->valueRef(), (m_registerBank.start()[r1 + 1])->valueRef());
  Value_i32 v32_2 (m_memory.readRef(v), m_memory.readRef(v + 1));

  m_leftArg32  = &v32_1;
  m_rightArg32 = &v32_2;

  execute();
}
void AbstractOperation::execute_baseRelativeIndexed(unsigned short r1, unsigned short r2, unsigned short r3)
{
  m_v1 = &r1;
  m_v2 = &r2;
  m_leftArg = &(m_registerBank.start()[r1])->valueRef();
  Value_i16 v = m_registerBank.index()[r3]->read() + m_registerBank.start()[r2]->read();
  m_rightArg = &(m_memory.readRef(v));

  Value_i32 v32_1 ((m_registerBank.start()[r1])->valueRef(), (m_registerBank.start()[r1 + 1])->valueRef());
  Value_i32 v32_2 (m_memory.readRef(v), m_memory.readRef(v + 1));
  m_leftArg32  = &v32_1;
  m_rightArg32 = &v32_2;

  execute();
}
void AbstractOperation::execute_longInstructionData(unsigned short r1, unsigned short r2, const Value_i16 & data)
{
  m_v1 = &r1;
  m_v2 = &r2;
  Value_i16 v = data + m_registerBank.index()[r2]->read();
  m_rightArg = &v;
  m_leftArg = &(m_registerBank.start()[r1])->valueRef();
  execute();
}
void AbstractOperation::execute_longInstructionDirectAddr(unsigned short r1, unsigned short r2, const Value_i16 & addr)
{
  m_v1 = &r1;
  m_v2 = &r2;
  Value_i16 v = addr + m_registerBank.index()[r2]->read();
  m_rightArg = &(m_memory.readRef(v)); 
  m_leftArg = &(m_registerBank.start()[r1])->valueRef();
  m_da = &v;

  Value_i32 v32_1 ((m_registerBank.start()[r1])->valueRef(), (m_registerBank.start()[r1 + 1])->valueRef());
  Value_i32 v32_2 (m_memory.readRef(v), m_memory.readRef(v + 1));
  m_leftArg32  = &v32_1;
  m_rightArg32 = &v32_2;

  execute();
}
void AbstractOperation::execute_longInstructionIndirectAddr(unsigned short r1, unsigned short r2, const Value_i16 & addr)
{
  m_v1 = &r1;
  m_v2 = &r2;
  Value_i16 v = addr + m_registerBank.index()[r2]->read();
  m_rightArg = &(m_memory.readRef((m_memory.read(v)))); 
  m_leftArg = &(m_registerBank.start()[r1])->valueRef();
  m_da = &v;

  Value_i32 v32_1 ((m_registerBank.start()[r1])->valueRef(), (m_registerBank.start()[r1 + 1])->valueRef());
  Value_i32 v32_2 (m_memory.readRef(m_memory.read(v)), m_memory.readRef(m_memory.read(v) + 1));
  m_leftArg32  = &v32_1;
  m_rightArg32 = &v32_2;

  execute();
}
void AbstractOperation::execute_immediate(unsigned short r1, const Value_i16 & data)
{
  m_v1 = &r1;
  m_leftArg = &(m_registerBank.start()[r1])->valueRef();
  m_rightArg = &(const_cast<Value_i16 &>(data)); // i.e.we rely on the fact that immediate operations don't actually change the data
  execute();
}
void AbstractOperation::execute_counterRelative(unsigned short d)
{
  m_v1 = &d;
  execute();
}
void AbstractOperation::execute_immediateShortPositive(unsigned short r1, unsigned short n)
{
  m_leftArg = &(m_registerBank.start()[r1])->valueRef();
  Value_i16 v(n);
  m_rightArg = &v;
  execute();
}
void AbstractOperation::execute_immediateShortNegative(unsigned short r1, unsigned short n)
{
  m_leftArg = &(m_registerBank.start()[r1])->valueRef();
  Value_i16 v(-1 * n);
  m_rightArg = &v;
  execute();
}
std::ostream & operator<<(std::ostream & os, const AbstractOperation & instruction)
{
  os << std::hex << " Operation : Not defined.." ;
  return os;
}
 
