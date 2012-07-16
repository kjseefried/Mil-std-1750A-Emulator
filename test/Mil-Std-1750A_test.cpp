#include "ComponentRegistry.h"
#include "InstructionRegistry.h"
#include <vector>

#include "Operation_sb_test.h"
#include "Operation_rb_test.h"
#include "Operation_tb_test.h"

#include "Operation_jc_test.h"

#include "Operation_or_test.h"


int main()
{

  std::vector<AbstractTestOperation *> v;
  v.push_back(new Operation_sb_test());
  v.push_back(new Operation_rb_test());
  v.push_back(new Operation_tb_test());
  v.push_back(new Operation_jc_test());

  v.push_back(new Operation_or_test());

  Memory & memory = ComponentRegistry::instance().memory();
  memory.initialize(0xFFFF);
  InstructionRegistry::instance();

  for ( unsigned int i = 0; i < v.size() ; i++)
  {
    std::cout << std::endl << "Test operation: " << v[i]->string() << " ..........." << std::endl << std::endl;
    if (v[i]->testOperation())
    {
      std::cout << std::endl << ".......... passed!" << std::endl;
    }
    else
    {
      std::cout << std::endl << ".......... failed!" << std::endl;
    }

    delete v[i];
  }


 return 1;
}
