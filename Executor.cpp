#include "ComponentRegistry.h"
#include "Processor.h"
#include <iostream>
#include <sstream>

void usage(char** argv)
{
  std::cerr << "Usage: " << argv[0] << " <memory file>" << std::endl;
}

int main(int argc,char** argv)
{

  if (argc < 2)
  {
    usage(argv);
    return 0;
  }

  Memory & memory = ComponentRegistry::instance().memory();

  memory.initializeFromFile(argv[1], 0xFFFF);

//  memory.dump();

  if (!memory.good())
  {
    std::cerr << "Failed to initialised memory. Exiting. " << std::endl;
    return 0;
  }

  //memory.dump();

  Processor & p = ComponentRegistry::instance().processor();

  p.clock();

  return 1;
}
