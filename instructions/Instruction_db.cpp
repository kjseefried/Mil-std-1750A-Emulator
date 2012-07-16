#include <iostream>
#include <iomanip>

#include "Instruction_db.h"
#include "Operation_d.h"

namespace {
  opCodeRange opCode = {0x1C, 0x1F};
  const unsigned short int ra = 2;
  const std::string opCodeStr = "DB";
  const std::string opDescription = "Single Precision Integer Divide, 32 bit dividend"; 
}

Instruction_db::Instruction_db() :
Instruction_baseRelative(opCode, ra, opCodeStr, opDescription)
{
  setOperation(new Operation_d());
}
Instruction_db::~Instruction_db()
{

}


void Instruction_db::execute() const
{
  Instruction_baseRelative::execute();
}
