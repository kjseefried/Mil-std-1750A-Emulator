
#include "Instruction_dvim.h"
#include "Operation_dv.h"

namespace {
  opCodeRange opCode = {0x4A, 0x4A};
  char opEx = 0x06;
  const std::string opCodeStr = "DVIM";
  const std::string opDescription = "Single Precision Integer Divide, 16 bit dividend"; 
}

Instruction_dvim::Instruction_dvim() :
Instruction_immediate(opCode, opEx, opCodeStr, opDescription)
{

}
Instruction_dvim::~Instruction_dvim()
{
 setOperation(new Operation_dv);
}


void Instruction_dvim::execute() const
{
  Instruction_immediate::execute();
}
