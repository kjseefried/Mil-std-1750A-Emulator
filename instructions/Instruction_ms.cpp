#include <iostream>
#include <iomanip>

#include "Instruction_ms.h"
#include "Operation_ms.h"

namespace {
  opCodeRange opCode = {0xC0, 0xC0};
  const std::string opCodeStr = "MS";
  const std::string opDescription = "Single Precision Integer multiply, 16 bit product"; 
}

Instruction_ms::Instruction_ms() :
Instruction_longInstruction(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_ms());
}
Instruction_ms::~Instruction_ms()
{

}


void Instruction_ms::execute() const
{
  Instruction_longInstruction::execute();
}
