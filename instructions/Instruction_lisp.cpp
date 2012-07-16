#include <iostream>
#include <iomanip>

#include "Instruction_lisp.h"
#include "Operation_l.h"

namespace {
  opCodeRange opCode = {0x82, 0x82};
  const std::string opCodeStr = "LISP";
  const std::string opDescription = "Single Precision Integer Load"; 
}

Instruction_lisp::Instruction_lisp() :
Instruction_immediateShortPositive(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_l());
}
Instruction_lisp::~Instruction_lisp()
{

}


void Instruction_lisp::execute() const
{
  Instruction_immediateShortPositive::execute();
}
