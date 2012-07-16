#include <iostream>
#include "StatusWord.h"

StatusWord::StatusWord()
{
}

StatusWord::~StatusWord()
{
}

void StatusWord::dump() const
{
  std::cout << std::hex << "CS(" << cs() << "), PS(" << ps() << "), AS(" << as() << ")" << std::endl;
}

