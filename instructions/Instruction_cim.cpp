
#include "Instruction_cim.h"
#include "Operation_c.h"

namespace {
  opCodeRange opCode = {0x4A, 0x4A};
  char opEx = 0x0A; 
  const std::string opCodeStr = "CIM";
  const std::string opDescription = "Single Precision Compare"; 
}

Instruction_cim::Instruction_cim() :
Instruction_immediate(opCode, opEx, opCodeStr, opDescription)
{
  setOperation(new Operation_c());
}
Instruction_cim::~Instruction_cim()
{

}


void Instruction_cim::execute() const
{
  Instruction_immediate::execute();
}
