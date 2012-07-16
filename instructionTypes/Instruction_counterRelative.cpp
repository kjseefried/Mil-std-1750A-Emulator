#include <iostream>
#include <sstream>
#include <iomanip>

#include "Instruction_counterRelative.h"
namespace {
  const unsigned int counterRelativeSize = 1;
}

Instruction_counterRelative::Instruction_counterRelative(opCodeRange opcode, 
                                                   const std::string & opcodeStr, 
                                                   const std::string & description) :
AbstractInstruction(counterRelativeSize, 
                    opcode, 
                    0,
                    opcodeStr, 
                    description)
{

}
Instruction_counterRelative::~Instruction_counterRelative()
{
}

void Instruction_counterRelative::execute() const
{
  if (operation())
  {
    operation()->execute_counterRelative(displacement());
  }
  else
  {
    std::cout << "No operation defined " << opcode_str()  << std::endl;
  }
}

std::string Instruction_counterRelative::details() const
{
  std::ostringstream os;
  os << std::hex << std::setfill('0') << std::uppercase << "DISPL(" << std::setw(2) << displacement() << ")"; 
  return os.str();
}

//std::ostream & operator<<(std::ostream & os, const Instruction_counterRelative & instruction)
//{
//  os << instruction.string();
//  return os;
//}
