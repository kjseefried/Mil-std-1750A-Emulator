#include <iostream>
#include <sstream>
#include <iomanip>

#include "Instruction_register2Register.h"

const unsigned int register2RegisterSize = 1;

Instruction_register2Register::Instruction_register2Register(opCodeRange opcode, const std::string & opcodeStr, const std::string & description) :
AbstractInstruction(register2RegisterSize, opcode, 0, opcodeStr, description)
{

}
Instruction_register2Register::~Instruction_register2Register()
{

}

void Instruction_register2Register::execute() const
{
  if (operation())
  {
    operation()->execute_register2Register(gr1(), gr2());
  }
  else 
  {
    std::cout << "No operation defined " << opcode_str()  << std::endl;
  }
}
std::string Instruction_register2Register::details() const
{
  std::ostringstream os;
  os << "GR1(" << std::setfill('0') << std::setw(2) << std::hex << std::uppercase << gr1() << "), GR2(" <<std::setw(2)  << gr2() << ")";
 
  return os.str();

}
//std::ostream & operator<<(std::ostream & os, const Instruction_register2Register & instruction)
//{
//  os << instruction.string();
//  return os;
//}
