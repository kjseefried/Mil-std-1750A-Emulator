#include <iostream>
#include <iomanip>

#include "Instruction_stbx.h"
#include "Operation_st.h"

namespace {
  opCodeRange opCode = {0x40, 0x43};
  const std::string opCodeStr = "STBX";
  const unsigned short int ra = 2;
  char opEx = 0x02;
  const std::string opDescription = "Single Precision Integer Store"; 
}

Instruction_stbx::Instruction_stbx() :
Instruction_baseRelativeIndexed(opCode, opEx, ra,opCodeStr, opDescription)
{
  setOperation(new Operation_st());
}
Instruction_stbx::~Instruction_stbx()
{

}


void Instruction_stbx::execute() const
{
  Instruction_baseRelativeIndexed::execute();
}
