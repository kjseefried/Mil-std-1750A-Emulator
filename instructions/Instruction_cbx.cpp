
#include "Instruction_cbx.h"
#include "Operation_c.h"

namespace {
  opCodeRange opCode = {0x40, 0x43};
  char opEx = 0x0C;
  const unsigned short int ra = 2;
  const std::string opCodeStr = "CBX";
  const std::string opDescription = "Single Precision Compare"; 
}

Instruction_cbx::Instruction_cbx() :
Instruction_baseRelativeIndexed(opCode, opEx, ra, opCodeStr, opDescription)
{
  setOperation(new Operation_c());
}
Instruction_cbx::~Instruction_cbx()
{

}


void Instruction_cbx::execute() const
{
  Instruction_baseRelativeIndexed::execute();
}
