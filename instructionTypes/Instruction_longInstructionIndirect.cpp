#include <iostream>
#include <sstream>
#include <iomanip>

#include "Instruction_longInstructionIndirect.h"

const unsigned int longInstructionSize = 2;

Instruction_longInstructionIndirect::Instruction_longInstructionIndirect(opCodeRange opcode, const std::string & opcodeStr, const std::string & description) :
AbstractInstruction(longInstructionSize, opcode, 0, opcodeStr, description)
{

}
Instruction_longInstructionIndirect::~Instruction_longInstructionIndirect()
{

}

void Instruction_longInstructionIndirect::execute() const
{
  if (operation())
  {
    operation()->execute_longInstructionIndirectAddr(gr1(), rx(), addr());
  }
  else
  {
    std::cout << "No operation defined "<< opcode_str()  << std::endl;
  }
  //AbstractInstruction::execute();
}

std::string Instruction_longInstructionIndirect::details() const
{
  std::ostringstream os;
  os << "GR(" << std::hex << std::uppercase << std::setw(2) << gr1() << "), RX(" << std::setw(2) << rx() << "), ADDR(" << std::setw(4) << addr() << ")" ; 
  return os.str();
}

//std::ostream & operator<<(std::ostream & os, const Instruction_longInstructionIndirect & instruction)
//{
//  os << instruction.string();
//  return os;
//}
