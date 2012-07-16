
#include "Operation_xor.h"
#include "Instruction_xorm.h"

namespace {
  opCodeRange opCode = {0x4A, 0x4A};
  char opEx = 0x09;
  const std::string opCodeStr = "XORM";
  const std::string opDescription = "Exlusive Logical OR"; 
}

Instruction_xorm::Instruction_xorm() :
Instruction_immediate(opCode, opEx, opCodeStr, opDescription)
{
  setOperation(new Operation_xor());
}
Instruction_xorm::~Instruction_xorm()
{

}


void Instruction_xorm::execute() const
{
  Instruction_immediate::execute();
}
