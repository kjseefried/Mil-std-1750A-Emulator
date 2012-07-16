
#include "Instruction_fcr.h"
#include "Operation_fc.h"

namespace {
  opCodeRange opCode = {0xF9, 0xF9};
  const std::string opCodeStr = "FCR";
  const std::string opDescription = "Floating Point Compare"; 
}
Instruction_fcr::Instruction_fcr() :
Instruction_register2Register(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_fc());
}
Instruction_fcr::~Instruction_fcr()
{

}


void Instruction_fcr::execute() const
{
  Instruction_register2Register::execute();
}
