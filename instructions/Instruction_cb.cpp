
#include "Instruction_cb.h"
#include "Operation_c.h"

namespace {
  opCodeRange opCode = {0x38, 0x3B};
  const unsigned short int ra = 2;
  const std::string opCodeStr = "CB";
  const std::string opDescription = "Single Precision Compare"; 
}

Instruction_cb::Instruction_cb() :
Instruction_baseRelative(opCode, ra, opCodeStr, opDescription)
{
  setOperation(new Operation_c());
}
Instruction_cb::~Instruction_cb()
{

}


void Instruction_cb::execute() const
{
  Instruction_baseRelative::execute();
}
