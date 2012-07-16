#include <iostream>
#include <iomanip>

#include "Instruction_ble.h"
#include "Operation_ble.h"

namespace {
  opCodeRange opCode = {0x78, 0x78};
  const std::string opCodeStr = "BLE";
  const std::string opDescription = "Branch if less than or equal to zero"; 
}

Instruction_ble::Instruction_ble() :
Instruction_counterRelative(opCode, opCodeStr, opDescription)
{
  setOperation(new Operation_ble());
}
Instruction_ble::~Instruction_ble()
{

}


void Instruction_ble::execute() const
{
  Instruction_counterRelative::execute();
}
