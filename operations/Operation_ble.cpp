
#include "Operation_ble.h"

namespace {
  const std::string opName = "BLE";
}

Operation_ble::Operation_ble() :
AbstractOperation(opName)
{

}
Operation_ble::~Operation_ble()
{
}

void Operation_ble::execute() const
{
  if (!m_statusWord.lez())
  {
    return;
  }
  if (*m_v1 < 128)
  {
    m_instructionCounter.increment(*m_v1);
  }
  else
  {
    m_instructionCounter.decrement(256 - (*m_v1));
  }
}
