#include <iostream>
#include <iomanip>

#include "Instruction_decm.h"
#include "Operation_decm.h"

namespace {
  opCodeRange opCode = {0xB3, 0xB3};
  const std::string opCodeStr = "DECM";
  const std::string opDescription = "Decrement Memory by Positive Integer"; 
}

Instruction_decm::Instruction_decm() :
Instruction_longInstruction(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_decm());
}
Instruction_decm::~Instruction_decm()
{

}


void Instruction_decm::execute() const
{
  Instruction_longInstruction::execute();
}
