#include <iostream>
#include <iomanip>

#include "Instruction_fdb.h"
#include "Operation_fd.h"

namespace {
  opCodeRange opCode = {0x2C, 0x2F};
  const unsigned short int ra = 0;
  const std::string opCodeStr = "FDB";
  const std::string opDescription = "Floating Point Divide"; 
}

Instruction_fdb::Instruction_fdb() :
Instruction_baseRelative(opCode, ra, opCodeStr, opDescription)
{
  setOperation(new Operation_fd());
}
Instruction_fdb::~Instruction_fdb()
{

}


void Instruction_fdb::execute() const
{
  Instruction_baseRelative::execute();
}
