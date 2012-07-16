
#include "Instruction_vio.h"
#include "Operation_vio.h"

namespace {
  opCodeRange opCode = {0x49, 0x49};
  const std::string opCodeStr = "VIO";
  const std::string opDescription = "Vectored Input/Output"; 
}

Instruction_vio::Instruction_vio() :
Instruction_longInstruction(opCode, opCodeStr, opDescription)
{

}
Instruction_vio::~Instruction_vio()
{
 setOperation(new Operation_vio());
}


void Instruction_vio::execute() const
{
  Instruction_longInstruction::execute();
}
