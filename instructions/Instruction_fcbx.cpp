
#include "Instruction_fcbx.h"
#include "Operation_fc.h"

namespace {
  opCodeRange opCode = {0x40, 0x43};
  char opEx = 0x0D;
  const unsigned short int ra = 0;
  const std::string opCodeStr = "FCBX";
  const std::string opDescription = "Floating Point Compare"; 
}

Instruction_fcbx::Instruction_fcbx() :
Instruction_baseRelativeIndexed(opCode, opEx, ra, opCodeStr, opDescription)
{
  setOperation(new Operation_fc());

}
Instruction_fcbx::~Instruction_fcbx()
{

}


void Instruction_fcbx::execute() const
{
  Instruction_baseRelativeIndexed::execute();
}
