#include <iostream>
#include "PageRegister.h"

PageRegister::PageRegister()
{
}

PageRegister::~PageRegister()
{
}

void PageRegister::dump() const
{
  std::cout << std::hex << "AL(" << al() << "), E/W(" << ew() << "), PPA(" << ppa() << ")" << std::endl;
}

