#include <iostream>
#include <sstream>
#include <iomanip>

#include "Instruction_immediateShortPositive.h"
namespace {
  const unsigned int immediateShortPositiveSize = 1;
}

Instruction_immediateShortPositive::Instruction_immediateShortPositive(opCodeRange opcode, 
                                                                       const std::string & opcodeStr, 
                                                                       const std::string & description) :
AbstractInstruction(immediateShortPositiveSize, 
                    opcode, 
                    0,
                    opcodeStr, 
                    description)
{

}
Instruction_immediateShortPositive::~Instruction_immediateShortPositive()
{
}

void Instruction_immediateShortPositive::execute() const
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

std::string Instruction_immediateShortPositive::details() const
{
  std::ostringstream os;
  os << std::hex << std::uppercase << std::setfill('0') << "RA(" << std::setw(2) << ra() << "), N(" << std::setw(2) << n() << ")"; 
  return os.str();
}

//std::ostream & operator<<(std::ostream & os, const Instruction_immediateShortPositive & instruction)
//{
//  os << instruction.string();
//  return os;
//}
