#include <iostream>
#include <sstream>
#include <iomanip>

#include "Instruction_longInstruction.h"

const unsigned int longInstructionSize = 2;

Instruction_longInstruction::Instruction_longInstruction(opCodeRange opcode, const std::string & opcodeStr, const std::string & description) :
AbstractInstruction(longInstructionSize, opcode, 0, opcodeStr, description)
{

}
Instruction_longInstruction::~Instruction_longInstruction()
{

}

void Instruction_longInstruction::execute() const
{
  if (operation())
  {
    operation()->execute_longInstructionDirectAddr(gr1(), rx(), addr());
  }
  else
  {
    std::cout << "No operation defined " << opcode_str()  << std::endl;
  }
}

std::string  Instruction_longInstruction::details() const
{
  std::ostringstream os;
  os << "GR(" << std::hex << std::uppercase << std::setfill('0') << std::setw(2) << gr1() << "), RX(" << std::setw(2) <<rx() << "), ADDR(" << std::hex << std::uppercase << std::setw(4) << addr() << ")"; 
  return os.str();  
}

//std::ostream & operator<<(std::ostream & os, const Instruction_longInstruction & instruction)
//{
//  os << instruction.string();
//  return os;
//}
