#include "Operation_rb_test.h"
#include "TestHelper.h"

Operation_rb_test::Operation_rb_test() :
AbstractTestOperation("Reset Bit")
{
}
Operation_rb_test::~Operation_rb_test()
{
}

bool Operation_rb_test::testOperation() const 
{

  return test_rbr() && test_rb() && test_rbi();
}

bool Operation_rb_test::test_rbr() const
{
  TestHelper tester("Test RBR");

  m_memory.write(0, 0x5402);
  m_memory.write(1, 0x5412);
  m_memory.write(2, 0x5422);
  m_memory.write(3, 0x5432);
  m_memory.write(4, 0x5442);
  m_memory.write(5, 0x5452);
  m_memory.write(6, 0x5462);
  m_memory.write(7, 0x5472);
  m_memory.write(8, 0x5482);
  m_memory.write(9, 0x5492);
  m_memory.write(0xA, 0x54A2);
  m_memory.write(0xB, 0x54B2);
  m_memory.write(0xC, 0x54C2);
  m_memory.write(0xD, 0x54D2);
  m_memory.write(0xE, 0x54E2);
  m_memory.write(0xF, 0x54F2);
  m_memory.write(0x10, 0x5402);
  m_memory.write(0x11, 0x5432);
  m_memory.write(0x12, 0x54a2);
  m_memory.write(0x13, 0x54f2);

  m_instructionCounter.write(0);
  m_registerBank.start()[2]->write(0xffff);

  bool status = true;
  //
  // Test Setting each individual bit
  //
  m_processor.clock();
  status &= tester.assert(1, m_registerBank.start()[2]->read(), 0x7FFF); 

  m_processor.clock();
  status &= tester.assert(2, m_registerBank.start()[2]->read(), 0x3FFF); 

  m_processor.clock();
  status &= tester.assert(3, m_registerBank.start()[2]->read(), 0x1FFF); 
  
  m_processor.clock();
  status &= tester.assert(4, m_registerBank.start()[2]->read(), 0x0FFF); 
  
  m_processor.clock();
  status &= tester.assert(5, m_registerBank.start()[2]->read(), 0x07FF); 

  m_processor.clock();
  status &= tester.assert(6, m_registerBank.start()[2]->read(), 0x03FF); 
  
  m_processor.clock();
  status &= tester.assert(7, m_registerBank.start()[2]->read(), 0x01FF); 

  m_processor.clock();
  status &= tester.assert(8, m_registerBank.start()[2]->read(), 0x00FF); 

  m_processor.clock();
  status &= tester.assert(9, m_registerBank.start()[2]->read(), 0x007F); 

  m_processor.clock();
  status &= tester.assert(10, m_registerBank.start()[2]->read(), 0x003F); 

  m_processor.clock();
  status &= tester.assert(11, m_registerBank.start()[2]->read(), 0x001F); 

  m_processor.clock();
  status &= tester.assert(12, m_registerBank.start()[2]->read(), 0x000F); 

  m_processor.clock();
  status &= tester.assert(13, m_registerBank.start()[2]->read(), 0x0007); 

  m_processor.clock();
  status &= tester.assert(14, m_registerBank.start()[2]->read(), 0x0003); 

  m_processor.clock();
  status &= tester.assert(15, m_registerBank.start()[2]->read(), 0x0001); 
  
  m_processor.clock();
  status &= tester.assert(16, m_registerBank.start()[2]->read(), 0x0000); 

  //
  // Test setting bits that are already set
  //
  m_processor.clock();
  status &= tester.assert(17, m_registerBank.start()[2]->read(), 0x0000); 

  m_processor.clock();
  status &= tester.assert(18, m_registerBank.start()[2]->read(), 0x0000); 

  m_processor.clock();
  status &= tester.assert(19, m_registerBank.start()[2]->read(), 0x0000); 

  m_processor.clock();
  status &= tester.assert(20, m_registerBank.start()[2]->read(), 0x0000); 

  return status;
}
bool Operation_rb_test::test_rb() const
{
  TestHelper tester("Test RB");

  m_instructionCounter.write(0);
  m_registerBank.start()[0]->write(0x100);
  m_registerBank.start()[1]->write(0x10);
  m_registerBank.start()[2]->write(0x20);
  m_registerBank.start()[0xf]->write(0xF0);

  m_memory.write(0x100, 0xFFFF);
  m_memory.write(0x110, 0xFFFF);
  m_memory.write(0x120, 0xFFFF);
  m_memory.write(0x1F0, 0xFFFF);

  m_memory.write(0, 0x5300);  // Reset bit ..
  m_memory.write(1, 0x100);   // .. as address 0x100

  m_memory.write(2, 0x53F0);  // Reset bit ..
  m_memory.write(3, 0x100);   // .. as address 0x100

  m_memory.write(4, 0x5301);  // Reset bit ..
  m_memory.write(5, 0x100);   // .. as address 0x100 + [RX]

  m_memory.write(6, 0x53F1);  // ReReset bit ..
  m_memory.write(7, 0x100);   // .. as address 0x100 + [RX]

  m_memory.write(8, 0x5302);  // Reset bit ..
  m_memory.write(9, 0x100);   // .. as address 0x100 + [RX]

  m_memory.write(0xA, 0x53F2);  // Reset bit ..
  m_memory.write(0xB, 0x100);   // .. as address 0x100 + [RX]

  m_memory.write(0xC, 0x530F);  // Reset bit ..
  m_memory.write(0xD, 0x100);   // .. as address 0x100 + [RX]

  m_memory.write(0xE, 0x53FF);  // Reset bit ..
  m_memory.write(0xF, 0x100);   // .. as address 0x100 + [RX]

  bool status = true;
  m_processor.clock();
  // Test with RX = 0
  status &= tester.assert(1, m_memory.read(0x100), 0x7FFF); 

  m_processor.clock();
  status &= tester.assert(2, m_memory.read(0x100), 0x7FFE); 

  // Test with RX = 1
  m_processor.clock();
  status &= tester.assert(3, m_memory.read(0x110), 0x7FFF); 

  m_processor.clock();
  status &= tester.assert(4, m_memory.read(0x110), 0x7FFE); 

  // Test with RX = 2
  m_processor.clock();
  status &= tester.assert(5, m_memory.read(0x120), 0x7FFF); 

  m_processor.clock();
  status &= tester.assert(6, m_memory.read(0x120), 0x7FFE); 

  // Test with RX = F
  m_processor.clock();
  status &= tester.assert(7, m_memory.read(0x1F0), 0x7FFF); 

  m_processor.clock();
  status &= tester.assert(8, m_memory.read(0x1F0), 0x7FFE); 

  return status;
}
bool Operation_rb_test::test_rbi() const
{
  TestHelper tester("Test RBI");

  m_instructionCounter.write(0);
  m_registerBank.start()[0]->write(0x100);
  m_registerBank.start()[1]->write(0x10);
  m_registerBank.start()[2]->write(0x20);
  m_registerBank.start()[0xf]->write(0xF0);

  m_memory.write(0x100, 0x200);
  m_memory.write(0x110, 0x210);
  m_memory.write(0x120, 0x220);
  m_memory.write(0x1F0, 0x2F0);

  m_memory.write(0x200, 0xFFFF);
  m_memory.write(0x210, 0xFFFF);
  m_memory.write(0x220, 0xFFFF);
  m_memory.write(0x2F0, 0xFFFF);

  m_memory.write(0, 0x5500);  // Reset bit ..
  m_memory.write(1, 0x100);   // .. as address 0x100

  m_memory.write(2, 0x55F0);  // Reset bit ..
  m_memory.write(3, 0x100);   // .. as address 0x100

  m_memory.write(4, 0x5501);  // Reset bit ..
  m_memory.write(5, 0x100);   // .. as address 0x100 + [RX]

  m_memory.write(6, 0x55F1);  // Reset bit ..
  m_memory.write(7, 0x100);   // .. as address 0x100 + [RX]

  m_memory.write(8, 0x5502);  // Reset bit ..
  m_memory.write(9, 0x100);   // .. as address 0x100 + [RX]

  m_memory.write(0xA, 0x55F2);  // Reset bit ..
  m_memory.write(0xB, 0x100);   // .. as address 0x100 + [RX]

  m_memory.write(0xC, 0x550F);  // Reset bit ..
  m_memory.write(0xD, 0x100);   // .. as address 0x100 + [RX]

  m_memory.write(0xE, 0x55FF);  // Reset bit ..
  m_memory.write(0xF, 0x100);   // .. as address 0x100 + [RX]

  bool status = true;
  m_processor.clock();
  // Test with RX = 0
  status &= tester.assert(1, m_memory.read(0x200), 0x7FFF);

  m_processor.clock();
  status &= tester.assert(2, m_memory.read(0x200), 0x7FFE);

  // Test with RX = 1
  m_processor.clock();
  status &= tester.assert(3, m_memory.read(0x210), 0x7FFF);

  m_processor.clock();
  status &= tester.assert(4, m_memory.read(0x210), 0x7FFE);

  // Test with RX = 2
  m_processor.clock();
  status &= tester.assert(5, m_memory.read(0x220), 0x7FFF);

  m_processor.clock();
  status &= tester.assert(6, m_memory.read(0x220), 0x7FFE);

  // Test with RX = F
  m_processor.clock();
  status &= tester.assert(7, m_memory.read(0x2F0), 0x7FFF);

  m_processor.clock();
  status &= tester.assert(8, m_memory.read(0x2F0), 0x7FFE);

  return status;

}
