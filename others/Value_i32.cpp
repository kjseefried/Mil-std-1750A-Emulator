

#include "Value_i32.h"

std::ostream & operator<<(std::ostream & os, const Value_i32 & v)
{
  return (os << v.msv() << " " << v.lsv());
}
