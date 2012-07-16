#include <iostream>
#include <sstream>
#include <iomanip>

#include "Instruction_immediateShortNegative.h"
namespace {
  const unsigned int immediateShortNegativeSize = 1;
}

Instruction_immediateShortNegative::Instruction_immediateShortNegative(opCodeRange opcode, 
                                                                       const std::string & opcodeStr, 
                                                                       const std::string & description) :
AbstractInstruction(immediateShortNegativeSize, 
                    opcode, 
                    0,
                    opcodeStr, 
                    description)
{

}
Instruction_immediateShortNegative::~Instruction_immediateShortNegative()
{
}

void Instruction_immediateShortNegative::execute() const
{
  if (operation())
  {
    operation()->execute_immediateShortPositive(ra(), n());
  }
  else
  {
    std::cout << "No operation defined " << opcode_str()  << std::endl;
  }
}

std::string Instruction_immediateShortNegative::details() const
{
  std::ostringstream os;
  os << std::hex << std::uppercase << std::setfill('0') << "RA(" << std::setw(2) << ra() << "), N(" << std::setw(2) << n() << ")"; 
  return os.str();
}

