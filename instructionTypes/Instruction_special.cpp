#include <iostream>
#include <sstream>
#include <iomanip>

#include "Instruction_special.h"

namespace {
  const unsigned int specialSize = 1;
}

Instruction_special::Instruction_special(opCodeRange opcode, 
                                         const std::string & opcodeStr, 
                                         const std::string & description) :
AbstractInstruction(specialSize, 
                    opcode, 
                    0,
                    opcodeStr, 
                    description)
{

}
Instruction_special::~Instruction_special()
{

}

void Instruction_special::execute() const
{
  AbstractInstruction::execute();
}

std::string Instruction_special::details() const
{
  std::ostringstream os;
  os << std::setfill('0') << std::hex << "X(" << std::setw(4) << ocex() << ")" ; 
  return os.str(); 
}

//std::ostream & operator<<(std::ostream & os, const Instruction_special & instruction)
//{
//  os << instruction.string();
//  return os;
//}
