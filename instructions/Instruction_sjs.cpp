#include <iostream>
#include <iomanip>

#include "Instruction_sjs.h"
#include "Operation_sjs.h"

namespace {
  opCodeRange opCode = {0x7E, 0x7E};
  const std::string opCodeStr = "SJS";
  const std::string opDescription = "Stack IC And Jump To Subroutine"; 
}

Instruction_sjs::Instruction_sjs() :
Instruction_longInstructionData(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_sjs());
}
Instruction_sjs::~Instruction_sjs()
{

}


void Instruction_sjs::execute() const
{
  Instruction_longInstructionData::execute();
}
