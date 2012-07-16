#include "ComponentRegistry.h"

ComponentRegistry::ComponentRegistry()
{
}

ComponentRegistry::~ComponentRegistry()
{
}

ComponentRegistry & ComponentRegistry::instance()
{
  static ComponentRegistry  s;
  return s;
}
