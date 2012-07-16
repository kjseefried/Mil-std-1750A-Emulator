#include <iostream>
#include <iomanip>

#include "Instruction_soj.h"
#include "Operation_soj.h"

namespace {
  opCodeRange opCode = {0x73, 0x73};
  const std::string opCodeStr = "SOJ";
  const std::string opDescription = "Subtract One And Jump"; 
}

Instruction_soj::Instruction_soj() :
Instruction_longInstructionData(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_soj());
}
Instruction_soj::~Instruction_soj()
{

}


void Instruction_soj::execute() const
{
  Instruction_longInstructionData::execute();
}
