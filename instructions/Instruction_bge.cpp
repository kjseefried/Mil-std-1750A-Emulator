#include <iostream>
#include <iomanip>

#include "Instruction_bge.h"
#include "Operation_bge.h"

namespace {
  opCodeRange opCode = {0x7B, 0x7B};
  const std::string opCodeStr = "BGE";
  const std::string opDescription = "Branch if greater than or equal to zero"; 
}

Instruction_bge::Instruction_bge() :
Instruction_counterRelative(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_bge());
}
Instruction_bge::~Instruction_bge()
{

}


void Instruction_bge::execute() const
{
  Instruction_counterRelative::execute();
}
