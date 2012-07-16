#include <iostream>
#include "PageRegisters.h"
#include "ComponentRegistry.h"

PageRegisters::PageRegisters()
{
}

PageRegisters::~PageRegisters()
{
}

Value_i16 PageRegisters::address(const PageRegisterSet set, const Value_i16 & shortAddress) const
{
  static StatusWord & s = ComponentRegistry::instance().statusWord();
  unsigned short ppa = m_pageRegisterGroup[s.as()].pageRegister(set, shortAddress.nib1()).ppa();
  return  ((shortAddress & 0x0fff) | (ppa << 12));
}


void PageRegisters::dump(const unsigned short int group, const unsigned short reg) const
{
  m_pageRegisterGroup[group].dump(reg);
}

void PageRegisters::dump(const unsigned short int group) const
{
  for (unsigned int i = 0; i < 16 ; i++)
  {
    dump(group, i);
  }
}
