#include <iostream>
#include <iomanip>

#include "Instruction_stb.h"
#include "Operation_st.h"

namespace {
  opCodeRange opCode = {0x08, 0x0B};
  const unsigned short int ra = 2;
  const std::string opCodeStr = "STB";
  const std::string opDescription = "Single Precision Integer Store"; 
}

Instruction_stb::Instruction_stb() :
Instruction_baseRelative(opCode, ra, opCodeStr, opDescription)
{
  setOperation(new Operation_st());
}
Instruction_stb::~Instruction_stb()
{

}


void Instruction_stb::execute() const
{
  Instruction_baseRelative::execute();
}
