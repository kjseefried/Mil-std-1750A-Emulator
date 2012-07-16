
#include "Instruction_cbl.h"
#include "Operation_cbl.h"

namespace {
  opCodeRange opCode = {0xF4, 0xF4};
  const std::string opCodeStr = "CBL";
  const std::string opDescription = "Compare Between Limits"; 
}

Instruction_cbl::Instruction_cbl() :
Instruction_longInstruction(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_cbl());
}
Instruction_cbl::~Instruction_cbl()
{

}


void Instruction_cbl::execute() const
{
  Instruction_longInstruction::execute();
}
