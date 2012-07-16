#include <iostream>
#include <sstream>
#include <iomanip>

#include "Instruction_longInstructionData.h"

const unsigned int immediateSize = 2;

Instruction_longInstructionData::Instruction_longInstructionData(opCodeRange opcode, const std::string & opcodeStr, const std::string & description) :
AbstractInstruction(immediateSize, opcode, 0, opcodeStr, description)
{

}
Instruction_longInstructionData::~Instruction_longInstructionData()
{

}

void Instruction_longInstructionData::execute() const
{
  if (operation())
  {
    operation()->execute_longInstructionData(gr1(), rx(), data());
  }
  else
  {
    std::cout << "No operation defined " << opcode_str() << std::endl;
  }
  //AbstractInstruction::execute();
}

std::string Instruction_longInstructionData::details() const
{
  std::ostringstream os;
  os << "GR(" << std::hex << std::uppercase << std::setw(2) << gr1() << "), RX(" << std::setw(2) << rx() << "), DATA(" << std::setw(4) << data() << ")" ; 
  return os.str();
}

//std::ostream & operator<<(std::ostream & os, const Instruction_longInstructionData & instruction)
//{
//  os << instruction.string();
//  return os;
//}
