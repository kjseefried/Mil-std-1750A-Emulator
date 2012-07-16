#include <iostream>
#include <sstream>
#include <iomanip>

#include "Instruction_baseRelative.h"
namespace {
  const unsigned int baseRelativeSize = 1;
}

Instruction_baseRelative::Instruction_baseRelative(opCodeRange opcode, 
                                                   const unsigned short int ra,
                                                   const std::string & opcodeStr, 
                                                   const std::string & description) :
AbstractInstruction(baseRelativeSize, 
                    opcode, 
                    0,
                    opcodeStr, 
                    description),
m_ra(ra)
{

}
Instruction_baseRelative::~Instruction_baseRelative()
{

}

void Instruction_baseRelative::execute() const
{
  if (operation())
  {
    operation()->execute_baseRelative(reg(), baseRegister(), displacement()); 
  }
  else
  {
    std::cout << "No operation defined " << opcode_str()<< std::endl;
  }
}

std::string  Instruction_baseRelative::details() const
{
  std::ostringstream os;
  os << std::hex << std::uppercase << "BR(" << baseRegister() << "), DISPL(" << displacement() << ")"; 
  return os.str();
}

//std::ostream & operator<<(std::ostream & os, const Instruction_baseRelative & instruction)
//{
//  os << instruction.string();
//  return os;
//}
