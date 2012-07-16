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

  std::string c;
  unsigned int N = 0; 
  bool quiet = false;
  bool started = false;
  int dumpStart = -1;
  int dumpEnd = -1;

  while (true)
  {
    if (!quiet) std::cout << ">: ";
    std::getline(std::cin, c);

    if (c == "start")
    {
      p.step();
      if (!quiet) p.show();
      started = true;
    }
    else if (c == "exit")
    {
      std::cout << "Exiting" << std::endl;
      break;
    }
    else if (c == "e")
    {
      if (started)
      {
        p.execute();
        p.step();
        if (!quiet) p.show();
        N++;
      }
      else
      {
        std::cout << "Use \"start\" before \"e\"" << std::endl;
      }
    }
    else if (c == "q")
    {
      std::cout << "Quiet mode. \"v\" for verbose." << std::endl;
      quiet = true;
    }
    else if (c == "v")
    {
      std::cout << "Verbose mode. \"q\" for quiet." << std::endl;
      quiet = false;
    }
    else if (c == "r")
    {
      std::cout << "Registers : " ;
      ComponentRegistry::instance().registerBank().dumpRegisters();
    }
    else if ((c[0] == 'p') && (c.size() > 2))
    {
      std::istringstream is(c.substr(2));
      unsigned short int i;
      is >> std::hex >> i;
      if (!is.fail())
      {
        std::cout << "Page Registers : " << std::endl ;
        ComponentRegistry::instance().pageRegisters().dump(i);
      }
    }
    else if (c == "s")
    {
      std::cout << "StatusWord: " ;
      ComponentRegistry::instance().statusWord().dump();
    }
    else if (c == "l")
    {
      p.show();
    }
    else if (c == "ic")
    {
      std::cout << "Inst. Cnt : " << std::hex << std::setfill('0') << std::setw(4) << std::right << ComponentRegistry::instance().instructionCounter().value() << std::endl;
    }
    else if (c == "f")
    {
      std::cout << "Faults    : " << std::hex << std::setfill('0') << std::setw(4) << ComponentRegistry::instance().instructionCounter().value() << std::endl;
    }
    else if (c == "I")
    {
      std::cout << (p.interruptsEnabled() ? "Interrupts Enabled." : "Interrupts Disabled") << std::endl;
      std::cout << "Interrupts : " << std::hex << std::setfill('0') << std::right << std::setw(4) << ComponentRegistry::instance().interrupts().value() << std::endl;
      std::cout << "Pending    : " << std::hex << std::setfill('0') << std::right << std::setw(4) << ComponentRegistry::instance().pendingInterrupts().value() << std::endl;
      std::cout << "Mask       : " << std::hex << std::setfill('0') << std::right << std::setw(4) << ComponentRegistry::instance().interruptMask().value() << std::endl;
    }
    else if ((c[0] == 'c') && (c[1] == ' '))
    {
      std::cout << c.substr(2) << std::endl;
    }
    else if (c[0] == 'b')
    {
      std::istringstream is(c.substr(1));
      unsigned int address;
      is >> std::hex >> address;
      while (ComponentRegistry::instance().instructionCounter().value() != address)
      {
        p.step();
        if (ComponentRegistry::instance().instructionCounter().value() != address)
        {
          p.execute();
          N++;
        }
      }
      p.step();
      p.show();
    }
    else if (c[0] == 'n')
    {
      std::istringstream is(c.substr(1));
      unsigned int nextN;
      is >> std::dec >> nextN;
      while (nextN > 0)
      {
        p.step();
        p.execute();
        N++;
        nextN--;
      }
      p.step();
      if (!quiet) p.show();
    }
    else if (c == "N")
    {
      std::cout << "Executed " << std::dec << N << " instructions." << std::endl;
    }
    else if (c[0] == 'm')
    {
      std::istringstream is(c.substr(1));
      unsigned int address;
      is >> std::hex >> address;
      std::cout << std::hex << std::setfill('0') << std::setw(8) << std::right << std::uppercase << address << " : " << std::setw(4) << ComponentRegistry::instance().memory().read(address) << std::endl;
    }
    
    else if (c == "x")
    {
      break;
    }
    else if ((c.substr(0,4) == "dump") && (c.size() > 5))
    {
      std::istringstream is(c.substr(5));
      std::string s;
      is >> s;
      if (dumpStart < dumpEnd)
      {
        memory.dump(s, dumpStart, dumpEnd);
      }
      else
      {
        memory.dump(s);
      }
    }
    else if ((c.substr(0,7) == "cfgdump") && (c.size() > 8))
    {
      std::istringstream is(c.substr(8));
      unsigned int a, b;
      is >> std::hex >> a >> b;
      if (!is.fail())
      {
        dumpStart = a;
        dumpEnd = b;
      } 
    }
    else if ((c.substr(0,3) == "set") && (c.size() > 4))
    {
      std::istringstream is(c.substr(4));
      std::string s;
      is >> s;
      if (s == "pi")
      {
        unsigned short int i;
        is >> std::hex >> i;
        if (!is.fail())
        {
          ComponentRegistry::instance().pendingInterrupts().write(i);
        }
      }
      else if (s == "mk")
      {
        unsigned short int i;
        is >> std::hex >> i;
        if (!is.fail())
        {
          ComponentRegistry::instance().interruptMask().write(i);
        }
      } 
      else if (s == "ic")
      {
        unsigned short int i;
        is >> std::hex >> i;
        if (!is.fail())
        {
          ComponentRegistry::instance().instructionCounter().write(i);
          p.step();
          p.show();
        }
      } 

      else if (s == "reg")
      {
        unsigned short int r;
        unsigned short int v;
        is >> std::dec >> r >> std::hex >> v;
        if (!is.fail())
        {
          ComponentRegistry::instance().registerBank().start()[r]->write(v);
        }
      }

    }
    else if ((c.substr(0,3) == "int") && (c.size() > 4))
    {
      std::istringstream is(c.substr(4));
      unsigned short int i;
      is >> i;
      if ((i >= 0) && (i <= 15))
      {
        ComponentRegistry::instance().interruptGenerator().addInterrupt(i);
        p.step();
        if (!quiet) p.show();
      }

    }
    else if (c == "h")
    {
      std::cout << "Help                  : " << std::endl;
      std::cout << "start                 : Start execution." << std::endl;
      std::cout << "exit                  : Exit." << std::endl;
      std::cout << "l                     : Show current instruction line" << std::endl;
      std::cout << "e                     : Execute current instruction" << std::endl;
      std::cout << "n [N]                 : Execute next N instructions" << std::endl;
      std::cout << "ic                    : Show value of instruction counter" << std::endl;
      std::cout << "r                     : Show contents of general registers" << std::endl;
      std::cout << "s                     : Show status words" << std::endl;
      std::cout << "p [g]                 : Show page register group g" << std::endl;
      std::cout << "I                     : Show content of interrupt registers" << std::endl;
      std::cout << "m [add]               : Show content of memory" << std::endl;
      std::cout << "dump \"file\"         : Dump memory to file" << std::endl;
      std::cout << "cfgdump [start] [end] : Configure addresses for memory dump" << std::endl;
      std::cout << "b [add]               : Break at address" << std::endl;
      std::cout << "N                     : Display number of executed instructions" << std::endl;
      std::cout << "set xx yyy            : Set" << std::endl;
      std::cout << "int n                 : Add interrupt n" << std::endl;
      std::cout << "q                     : Quiet mode." << std::endl;
      std::cout << "v                     : Verbose mode." << std::endl;
      std::cout << "c [comment]           : Display comment." << std::endl;
      std::cout << "h                     : Show this help" << std::endl;
    }
  }
  return 1;
}
