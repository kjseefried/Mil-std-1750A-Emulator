#include <iostream>
#include <sstream>
#include <iomanip>

#include "Instruction_baseRelativeIndexed.h"
namespace {
  const unsigned int baseRelativeIndexSize = 1;
}

Instruction_baseRelativeIndexed::Instruction_baseRelativeIndexed(opCodeRange opcode, 
                                                                 char ocex,
                                                                 unsigned short int ra,
                                                                 const std::string & opcodeStr, 
                                                                 const std::string & description) :
AbstractInstruction(baseRelativeIndexSize, 
                    opcode, 
                    ocex,
                    opcodeStr, 
                    description),
m_ra(ra)
{

}
Instruction_baseRelativeIndexed::~Instruction_baseRelativeIndexed()
{

}

void Instruction_baseRelativeIndexed::execute() const
{
  if (operation())
  {
    operation()->execute_baseRelativeIndexed(reg(), baseRegister(), rx());
  }
  else
  {
    std::cout << "No operation defined " << opcode_str()<< std::endl;
  }
}

std::string Instruction_baseRelativeIndexed::details() const
{
  std::ostringstream os;
  os << std::hex << std::uppercase << "BR(" << baseRegister() << "), X(" << ocex() << "), RX(" << rx() << ")"; 
  return os.str();
}


//std::ostream & operator<<(std::ostream & os, const Instruction_baseRelativeIndexed & instruction)
//{
//  os << instruction.string();
//  return os;
//}
