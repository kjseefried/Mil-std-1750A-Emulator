#include <iostream>
#include <iomanip>

#include "Instruction_andb.h"
#include "Operation_and.h"

namespace {
  opCodeRange opCode = {0x34, 0x37};
  const unsigned short int ra = 2;
  const std::string opCodeStr = "ANDX";
  const std::string opDescription = "Logical AND"; 
}

Instruction_andb::Instruction_andb() :
Instruction_baseRelative(opCode, ra, opCodeStr, opDescription)
{
  setOperation(new Operation_and());
}
Instruction_andb::~Instruction_andb()
{

}


void Instruction_andb::execute() const
{
  Instruction_baseRelative::execute();
}
