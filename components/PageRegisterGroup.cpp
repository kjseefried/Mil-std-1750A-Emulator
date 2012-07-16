#include <iostream>
#include "PageRegisterGroup.h"

PageRegisterGroup::PageRegisterGroup()
{
}

PageRegisterGroup::~PageRegisterGroup()
{
}

void PageRegisterGroup::dump(const unsigned short reg) const
{
  std::cout << std::hex << "INS: ";
  m_pageRegisters[PRS_INS][reg].dump();
  std::cout << std::hex << "OP : ";
  m_pageRegisters[PRS_OP][reg].dump();
}

