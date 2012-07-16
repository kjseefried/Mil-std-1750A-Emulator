
#include "Instruction_dim.h"
#include "Operation_d.h"

namespace {
  opCodeRange opCode = {0x4A, 0x4A};
  char opEx = 0x05;
  const std::string opCodeStr = "DIM";
  const std::string opDescription = "Single Precision Integer Divide, 32 bit dividend"; 
}

Instruction_dim::Instruction_dim() :
Instruction_immediate(opCode, opEx, opCodeStr, opDescription)
{

}
Instruction_dim::~Instruction_dim()
{
 setOperation(new Operation_d);
}


void Instruction_dim::execute() const
{
  Instruction_immediate::execute();
}
