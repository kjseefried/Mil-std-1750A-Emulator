#include "Operation_sb_test.h"
#include "TestHelper.h"

Operation_sb_test::Operation_sb_test() :
AbstractTestOperation("Set Bit")
{
}
Operation_sb_test::~Operation_sb_test()
{
}

bool Operation_sb_test::testOperation() const 
{

  return test_sbr() && test_sb() && test_sbi();
}

bool Operation_sb_test::test_sbr() const
{
  TestHelper tester("Test SBR");

  m_memory.write(0, 0x5102);
  m_memory.write(1, 0x5112);
  m_memory.write(2, 0x5122);
  m_memory.write(3, 0x5132);
  m_memory.write(4, 0x5142);
  m_memory.write(5, 0x5152);
  m_memory.write(6, 0x5162);
  m_memory.write(7, 0x5172);
  m_memory.write(8, 0x5182);
  m_memory.write(9, 0x5192);
  m_memory.write(0xA, 0x51A2);
  m_memory.write(0xB, 0x51B2);
  m_memory.write(0xC, 0x51C2);
  m_memory.write(0xD, 0x51D2);
  m_memory.write(0xE, 0x51E2);
  m_memory.write(0xF, 0x51F2);
  m_memory.write(0x10, 0x5102);
  m_memory.write(0x11, 0x5132);
  m_memory.write(0x12, 0x51a2);
  m_memory.write(0x13, 0x51f2);

  m_instructionCounter.write(0);
  m_registerBank.start()[2]->write(0);

  bool status = true;
  //
  // Test Setting each individual bit
  //
  m_processor.clock();
  status &= tester.assert(1, m_registerBank.start()[2]->read(), 0x8000); 

  m_processor.clock();
  status &= tester.assert(2, m_registerBank.start()[2]->read(), 0xC000); 

  m_processor.clock();
  status &= tester.assert(3, m_registerBank.start()[2]->read(), 0xE000); 
  
  m_processor.clock();
  status &= tester.assert(4, m_registerBank.start()[2]->read(), 0xF000); 
  
  m_processor.clock();
  status &= tester.assert(5, m_registerBank.start()[2]->read(), 0xF800); 

  m_processor.clock();
  status &= tester.assert(6, m_registerBank.start()[2]->read(), 0xFC00); 
  
  m_processor.clock();
  status &= tester.assert(7, m_registerBank.start()[2]->read(), 0xFE00); 

  m_processor.clock();
  status &= tester.assert(8, m_registerBank.start()[2]->read(), 0xFF00); 

  m_processor.clock();
  status &= tester.assert(9, m_registerBank.start()[2]->read(), 0xFF80); 

  m_processor.clock();
  status &= tester.assert(10, m_registerBank.start()[2]->read(), 0xFFC0); 

  m_processor.clock();
  status &= tester.assert(11, m_registerBank.start()[2]->read(), 0xFFE0); 

  m_processor.clock();
  status &= tester.assert(12, m_registerBank.start()[2]->read(), 0xFFF0); 

  m_processor.clock();
  status &= tester.assert(13, m_registerBank.start()[2]->read(), 0xFFF8); 

  m_processor.clock();
  status &= tester.assert(14, m_registerBank.start()[2]->read(), 0xFFFC); 

  m_processor.clock();
  status &= tester.assert(15, m_registerBank.start()[2]->read(), 0xFFFE); 
  
  m_processor.clock();
  status &= tester.assert(16, m_registerBank.start()[2]->read(), 0xFFFF); 

  //
  // Test setting bits that are already set
  //
  m_processor.clock();
  status &= tester.assert(17, m_registerBank.start()[2]->read(), 0xFFFF); 

  m_processor.clock();
  status &= tester.assert(18, m_registerBank.start()[2]->read(), 0xFFFF); 

  m_processor.clock();
  status &= tester.assert(19, m_registerBank.start()[2]->read(), 0xFFFF); 

  m_processor.clock();
  status &= tester.assert(20, m_registerBank.start()[2]->read(), 0xFFFF); 

  return status;
}
bool Operation_sb_test::test_sb() const
{
  TestHelper tester("Test SB");

  m_instructionCounter.write(0);
  m_registerBank.start()[0]->write(0x100);
  m_registerBank.start()[1]->write(0x10);
  m_registerBank.start()[2]->write(0x20);
  m_registerBank.start()[0xf]->write(0xF0);

  m_memory.write(0x100, 0);
  m_memory.write(0x110, 0);
  m_memory.write(0x120, 0);
  m_memory.write(0x1F0, 0);

  m_memory.write(0, 0x5000);  // Set bit ..
  m_memory.write(1, 0x100);   // .. as address 0x100

  m_memory.write(2, 0x50F0);  // Set bit ..
  m_memory.write(3, 0x100);   // .. as address 0x100

  m_memory.write(4, 0x5001);  // Set bit ..
  m_memory.write(5, 0x100);   // .. as address 0x100 + [RX]

  m_memory.write(6, 0x50F1);  // Set bit ..
  m_memory.write(7, 0x100);   // .. as address 0x100 + [RX]

  m_memory.write(8, 0x5002);  // Set bit ..
  m_memory.write(9, 0x100);   // .. as address 0x100 + [RX]

  m_memory.write(0xA, 0x50F2);  // Set bit ..
  m_memory.write(0xB, 0x100);   // .. as address 0x100 + [RX]

  m_memory.write(0xC, 0x500F);  // Set bit ..
  m_memory.write(0xD, 0x100);   // .. as address 0x100 + [RX]

  m_memory.write(0xE, 0x50FF);  // Set bit ..
  m_memory.write(0xF, 0x100);   // .. as address 0x100 + [RX]

  bool status = true;
  m_processor.clock();
  // Test with RX = 0
  status &= tester.assert(1, m_memory.read(0x100), 0x8000); 

  m_processor.clock();
  status &= tester.assert(2, m_memory.read(0x100), 0x8001); 

  // Test with RX = 1
  m_processor.clock();
  status &= tester.assert(3, m_memory.read(0x110), 0x8000); 

  m_processor.clock();
  status &= tester.assert(4, m_memory.read(0x110), 0x8001); 

  // Test with RX = 2
  m_processor.clock();
  status &= tester.assert(5, m_memory.read(0x120), 0x8000); 

  m_processor.clock();
  status &= tester.assert(6, m_memory.read(0x120), 0x8001); 

  // Test with RX = F
  m_processor.clock();
  status &= tester.assert(7, m_memory.read(0x1F0), 0x8000); 

  m_processor.clock();
  status &= tester.assert(8, m_memory.read(0x1F0), 0x8001); 

  return status;
}
bool Operation_sb_test::test_sbi() const
{
  TestHelper tester("Test SBI");

  m_instructionCounter.write(0);
  m_registerBank.start()[0]->write(0x100);
  m_registerBank.start()[1]->write(0x10);
  m_registerBank.start()[2]->write(0x20);
  m_registerBank.start()[0xf]->write(0xF0);

  m_memory.write(0x100, 0x200);
  m_memory.write(0x110, 0x210);
  m_memory.write(0x120, 0x220);
  m_memory.write(0x1F0, 0x2F0);

  m_memory.write(0x200, 0);
  m_memory.write(0x210, 0);
  m_memory.write(0x220, 0);
  m_memory.write(0x2F0, 0);

  m_memory.write(0, 0x5200);  // Set bit ..
  m_memory.write(1, 0x100);   // .. as address 0x100

  m_memory.write(2, 0x52F0);  // Set bit ..
  m_memory.write(3, 0x100);   // .. as address 0x100

  m_memory.write(4, 0x5201);  // Set bit ..
  m_memory.write(5, 0x100);   // .. as address 0x100 + [RX]

  m_memory.write(6, 0x52F1);  // Set bit ..
  m_memory.write(7, 0x100);   // .. as address 0x100 + [RX]

  m_memory.write(8, 0x5202);  // Set bit ..
  m_memory.write(9, 0x100);   // .. as address 0x100 + [RX]

  m_memory.write(0xA, 0x52F2);  // Set bit ..
  m_memory.write(0xB, 0x100);   // .. as address 0x100 + [RX]

  m_memory.write(0xC, 0x520F);  // Set bit ..
  m_memory.write(0xD, 0x100);   // .. as address 0x100 + [RX]

  m_memory.write(0xE, 0x52FF);  // Set bit ..
  m_memory.write(0xF, 0x100);   // .. as address 0x100 + [RX]

  bool status = true;
  m_processor.clock();
  // Test with RX = 0
  status &= tester.assert(1, m_memory.read(0x200), 0x8000);

  m_processor.clock();
  status &= tester.assert(2, m_memory.read(0x200), 0x8001);

  // Test with RX = 1
  m_processor.clock();
  status &= tester.assert(3, m_memory.read(0x210), 0x8000);

  m_processor.clock();
  status &= tester.assert(4, m_memory.read(0x210), 0x8001);

  // Test with RX = 2
  m_processor.clock();
  status &= tester.assert(5, m_memory.read(0x220), 0x8000);

  m_processor.clock();
  status &= tester.assert(6, m_memory.read(0x220), 0x8001);

  // Test with RX = F
  m_processor.clock();
  status &= tester.assert(7, m_memory.read(0x2F0), 0x8000);

  m_processor.clock();
  status &= tester.assert(8, m_memory.read(0x2F0), 0x8001);

  return status;

}
