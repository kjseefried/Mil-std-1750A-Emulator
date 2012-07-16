
#include "Instruction_fcb.h"
#include "Operation_fc.h"

namespace {
  opCodeRange opCode = {0x3C, 0x3F};
  const unsigned short int ra = 0;
  const std::string opCodeStr = "FCB";
  const std::string opDescription = "Floating Point Compare"; 
}

Instruction_fcb::Instruction_fcb() :
Instruction_baseRelative(opCode, ra, opCodeStr, opDescription)
{
  setOperation(new Operation_fc());

}
Instruction_fcb::~Instruction_fcb()
{

}


void Instruction_fcb::execute() const
{
  Instruction_baseRelative::execute();
}
