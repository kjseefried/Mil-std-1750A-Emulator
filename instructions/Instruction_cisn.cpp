#include <iostream>
#include <iomanip>

#include "Instruction_cisn.h"
#include "Operation_c.h"

namespace {
  opCodeRange opCode = {0xF3, 0xF3};
  const std::string opCodeStr = "CISN";
  const std::string opDescription = "Single Precision Compare"; 
}
Instruction_cisn::Instruction_cisn() :
Instruction_immediateShortNegative(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_c());
}
Instruction_cisn::~Instruction_cisn()
{

}


void Instruction_cisn::execute() const
{
  Instruction_immediateShortNegative::execute();
}
