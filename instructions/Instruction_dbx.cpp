#include <iostream>
#include <iomanip>

#include "Instruction_dbx.h"
#include "Operation_d.h"

namespace {
  opCodeRange opCode = {0x40, 0x43};
  const std::string opCodeStr = "DBX";
  const unsigned short int ra = 2;
  char opEx = 0x07;
  const std::string opDescription = "Single Precision Integer Divide, 32 bit dividend"; 
}

Instruction_dbx::Instruction_dbx() :
Instruction_baseRelativeIndexed(opCode, opEx, ra, opCodeStr, opDescription)
{
  setOperation(new Operation_d());
}
Instruction_dbx::~Instruction_dbx()
{

}


void Instruction_dbx::execute() const
{
  Instruction_baseRelativeIndexed::execute();
}
