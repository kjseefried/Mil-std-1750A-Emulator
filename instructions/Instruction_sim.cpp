
#include "Instruction_sim.h"
#include "Operation_s.h"

namespace {
  opCodeRange opCode = {0x4A, 0x4A};
  char opEx = 0x02;
  const std::string opCodeStr = "SIM";
  const std::string opDescription = "Single Precision Integer Subtract"; 
}

Instruction_sim::Instruction_sim() :
Instruction_immediate(opCode, opEx, opCodeStr, opDescription)
{
 setOperation(new Operation_s());
}
Instruction_sim::~Instruction_sim()
{
}


void Instruction_sim::execute() const
{
  Instruction_immediate::execute();
}
