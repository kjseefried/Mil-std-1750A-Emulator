#include <iostream>
#include <iomanip>

#include "Instruction_bgt.h"
#include "Operation_bgt.h"

namespace {
  opCodeRange opCode = {0x79, 0x79};
  const std::string opCodeStr = "BGT";
  const std::string opDescription = "Branch if greater than zero"; 
}

Instruction_bgt::Instruction_bgt() :
Instruction_counterRelative(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_bgt());
}
Instruction_bgt::~Instruction_bgt()
{

}


void Instruction_bgt::execute() const
{
  Instruction_counterRelative::execute();
}
