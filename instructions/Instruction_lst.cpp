
#include "Instruction_lst.h"
#include "Operation_lst.h"

namespace {
  opCodeRange opCode = {0x7D, 0x7D};
  const std::string opCodeStr = "LST";
  const std::string opDescription = "Load Status"; 
}

Instruction_lst::Instruction_lst() :
Instruction_longInstruction(opCode, opCodeStr, opDescription)
{
 setOperation(new Operation_lst());
}
Instruction_lst::~Instruction_lst()
{

}


void Instruction_lst::execute() const
{
  Instruction_longInstruction::execute();
}
