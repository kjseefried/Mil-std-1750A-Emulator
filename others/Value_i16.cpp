

#include "Value_i16.h"

std::ostream & operator<<(std::ostream & os, const Value_i16 & v)
{
  return (os << v.value());
}
