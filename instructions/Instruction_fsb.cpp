#include <iostream>
#include <iomanip>

#include "Instruction_fsb.h"
#include "Operation_fs.h"

namespace {
  opCodeRange opCode = {0x24, 0x27};
  const unsigned short int ra = 0;
  const std::string opCodeStr = "FSB";
  const std::string opDescription = "Floating Point Subtract"; 
}

Instruction_fsb::Instruction_fsb() :
Instruction_baseRelative(opCode, ra, opCodeStr, opDescription)
{
  setOperation(new Operation_fs());
}
Instruction_fsb::~Instruction_fsb()
{

}


void Instruction_fsb::execute() const
{
  Instruction_baseRelative::execute();
}
