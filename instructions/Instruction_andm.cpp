
#include "Instruction_andm.h"
#include "Operation_and.h"

namespace {
  opCodeRange opCode = {0x4A, 0x4A};
  char opEx = 0x07;
  const std::string opCodeStr = "ANDM";
  const std::string opDescription = "Logical AND"; 
}

Instruction_andm::Instruction_andm() :
Instruction_immediate(opCode, opEx, opCodeStr, opDescription)
{
  setOperation(new Operation_and());

}
Instruction_andm::~Instruction_andm()
{

}


void Instruction_andm::execute() const
{
  Instruction_immediate::execute();
}
