
#include "Instruction_mim.h"
#include "Operation_m.h"

namespace {
  opCodeRange opCode = {0x4A, 0x4A};
  char opEx = 0x03;
  const std::string opCodeStr = "MIM";
  const std::string opDescription = "Single Precision Integer Multiply, 32 bit dividend"; 
}

Instruction_mim::Instruction_mim() :
Instruction_immediate(opCode, opEx, opCodeStr, opDescription)
{

}
Instruction_mim::~Instruction_mim()
{
 setOperation(new Operation_m());
}


void Instruction_mim::execute() const
{
  Instruction_immediate::execute();
}
