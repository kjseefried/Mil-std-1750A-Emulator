#include <iostream>
#include <iomanip>

#include "Instruction_srm.h"
#include "Operation_srm.h"

namespace {
  opCodeRange opCode = {0x97, 0x97};
  const std::string opCodeStr = "SRM";
  const std::string opDescription = "Store Registers Through Mask"; 
}

Instruction_srm::Instruction_srm() :
Instruction_longInstruction(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_srm());
}
Instruction_srm::~Instruction_srm()
{

}


void Instruction_srm::execute() const
{
  Instruction_longInstruction::execute();
}
