#include "Operation_tb_test.h"
#include "TestHelper.h"

Operation_tb_test::Operation_tb_test() :
AbstractTestOperation("Test Bit")
{
}
Operation_tb_test::~Operation_tb_test()
{
}

bool Operation_tb_test::testOperation() const 
{
  return test_tbr() && test_tb() && test_tbi();
}

bool Operation_tb_test::test_tbr() const
{
  TestHelper tester("Test TBR");

  m_memory.write(0, 0x5702);
  m_memory.write(1, 0x5712);
  m_memory.write(2, 0x5722);
  m_memory.write(3, 0x5732);
  m_memory.write(4, 0x5742);
  m_memory.write(5, 0x5752);
  m_memory.write(6, 0x5762);
  m_memory.write(7, 0x5772);
  m_memory.write(8, 0x5782);
  m_memory.write(9, 0x5792);
  m_memory.write(0xA, 0x57A2);
  m_memory.write(0xB, 0x57B2);
  m_memory.write(0xC, 0x57C2);
  m_memory.write(0xD, 0x57D2);
  m_memory.write(0xE, 0x57E2);
  m_memory.write(0xF, 0x57F2);

  m_memory.write(0x10, 0x570F);
  m_memory.write(0x11, 0x571F);
  m_memory.write(0x12, 0x572F);
  m_memory.write(0x13, 0x573F);
  m_memory.write(0x14, 0x574F);
  m_memory.write(0x15, 0x575F);
  m_memory.write(0x16, 0x576F);
  m_memory.write(0x17, 0x577F);
  m_memory.write(0x18, 0x578F);
  m_memory.write(0x19, 0x579F);
  m_memory.write(0x1A, 0x57AF);
  m_memory.write(0x1B, 0x57BF);
  m_memory.write(0x1C, 0x57CF);
  m_memory.write(0x1D, 0x57DF);
  m_memory.write(0x1E, 0x57EF);
  m_memory.write(0x1F, 0x57FF);


  m_instructionCounter.write(0);
  m_registerBank.start()[2]->write(0xAAAA);
  m_registerBank.start()[0xF]->write(0x5555);

  bool status = true;
  //
  // Testing each individual bit of 0xAAAA
  //
  m_processor.clock();
  status &= tester.assert(1, m_statusWord.cs(), 0x1); 

  m_processor.clock();
  status &= tester.assert(2, m_statusWord.cs(), 0x2); 

  m_processor.clock();
  status &= tester.assert(3, m_statusWord.cs(), 0x4); 

  m_processor.clock();
  status &= tester.assert(4, m_statusWord.cs(), 0x2); 

  m_processor.clock();
  status &= tester.assert(5, m_statusWord.cs(), 0x4); 

  m_processor.clock();
  status &= tester.assert(6, m_statusWord.cs(), 0x2); 

  m_processor.clock();
  status &= tester.assert(7, m_statusWord.cs(), 0x4); 

  m_processor.clock();
  status &= tester.assert(8, m_statusWord.cs(), 0x2); 

  m_processor.clock();
  status &= tester.assert(9, m_statusWord.cs(), 0x4); 

  m_processor.clock();
  status &= tester.assert(10, m_statusWord.cs(), 0x2); 

  m_processor.clock();
  status &= tester.assert(11, m_statusWord.cs(), 0x4); 

  m_processor.clock();
  status &= tester.assert(12, m_statusWord.cs(), 0x2); 

  m_processor.clock();
  status &= tester.assert(13, m_statusWord.cs(), 0x4); 

  m_processor.clock();
  status &= tester.assert(14, m_statusWord.cs(), 0x2); 

  m_processor.clock();
  status &= tester.assert(15, m_statusWord.cs(), 0x4); 

  m_processor.clock();
  status &= tester.assert(16, m_statusWord.cs(), 0x2); 

  //
  // Testing each individual bit of 0xAAAA
  //
  m_processor.clock();
  status &= tester.assert(17, m_statusWord.cs(), 0x2); 

  m_processor.clock();
  status &= tester.assert(18, m_statusWord.cs(), 0x4); 

  m_processor.clock();
  status &= tester.assert(19, m_statusWord.cs(), 0x2); 

  m_processor.clock();
  status &= tester.assert(20, m_statusWord.cs(), 0x4); 

  m_processor.clock();
  status &= tester.assert(21, m_statusWord.cs(), 0x2); 

  m_processor.clock();
  status &= tester.assert(22, m_statusWord.cs(), 0x4); 

  m_processor.clock();
  status &= tester.assert(23, m_statusWord.cs(), 0x2); 

  m_processor.clock();
  status &= tester.assert(24, m_statusWord.cs(), 0x4); 

  m_processor.clock();
  status &= tester.assert(25, m_statusWord.cs(), 0x2); 

  m_processor.clock();
  status &= tester.assert(26, m_statusWord.cs(), 0x4); 

  m_processor.clock();
  status &= tester.assert(27, m_statusWord.cs(), 0x2); 

  m_processor.clock();
  status &= tester.assert(28, m_statusWord.cs(), 0x4); 

  m_processor.clock();
  status &= tester.assert(29, m_statusWord.cs(), 0x2); 

  m_processor.clock();
  status &= tester.assert(30, m_statusWord.cs(), 0x4); 

  m_processor.clock();
  status &= tester.assert(31, m_statusWord.cs(), 0x2); 

  m_processor.clock();
  status &= tester.assert(32, m_statusWord.cs(), 0x4); 

  //Check that the registers themselves are unchanged 
  status &= tester.assert(33, m_registerBank.start()[2]->read(), 0xAAAA); 
  status &= tester.assert(34, m_registerBank.start()[0xf]->read(), 0x5555); 
 
 return status;
}
bool Operation_tb_test::test_tb() const
{
  TestHelper tester("Test SB");

  m_instructionCounter.write(0);
  m_registerBank.start()[0]->write(0x100);
  m_registerBank.start()[1]->write(0x10);
  m_registerBank.start()[2]->write(0x20);
  m_registerBank.start()[0xf]->write(0xF0);

  m_memory.write(0x100, 0xAAAA);
  m_memory.write(0x110, 0x5555);
  m_memory.write(0x120, 0xAAAA);
  m_memory.write(0x1F0, 0x5555);

  m_memory.write(0, 0x5600);  // Test bit ..
  m_memory.write(1, 0x100);   // .. as address 0x100

  m_memory.write(2, 0x56F0);  // Test bit ..
  m_memory.write(3, 0x100);   // .. as address 0x100

  m_memory.write(4, 0x5601);  // Test bit ..
  m_memory.write(5, 0x100);   // .. as address 0x100 + [RX]

  m_memory.write(6, 0x56F1);  // Test bit ..
  m_memory.write(7, 0x100);   // .. as address 0x100 + [RX]

  m_memory.write(8, 0x5602);  // Test bit ..
  m_memory.write(9, 0x100);   // .. as address 0x100 + [RX]

  m_memory.write(0xA, 0x56F2);  // Test bit ..
  m_memory.write(0xB, 0x100);   // .. as address 0x100 + [RX]

  m_memory.write(0xC, 0x560F);  // Test bit ..
  m_memory.write(0xD, 0x100);   // .. as address 0x100 + [RX]

  m_memory.write(0xE, 0x56FF);  // Test bit ..
  m_memory.write(0xF, 0x100);   // .. as address 0x100 + [RX]

  bool status = true;
  m_processor.clock();
  // Test with RX = 0
  status &= tester.assert(1, m_statusWord.cs(), 0x1); 
  
  m_processor.clock();
  status &= tester.assert(2, m_statusWord.cs(), 0x2); 
  
  // Test with RX = 1
  m_processor.clock();
  status &= tester.assert(3, m_statusWord.cs(), 0x2); 
  
  m_processor.clock();
  status &= tester.assert(4, m_statusWord.cs(), 0x4); 
  
  // Test with RX = 2
  m_processor.clock();
  status &= tester.assert(4, m_statusWord.cs(), 0x1); 

  m_processor.clock();
  status &= tester.assert(5, m_statusWord.cs(), 0x2); 

  // Test with RX = F 
  m_processor.clock();
  status &= tester.assert(6, m_statusWord.cs(), 0x2); 
  
  m_processor.clock();
  status &= tester.assert(7, m_statusWord.cs(), 0x4); 

  return status;

}
bool Operation_tb_test::test_tbi() const
{
  TestHelper tester("Test SB");

  m_instructionCounter.write(0);
  m_registerBank.start()[0]->write(0x100);
  m_registerBank.start()[1]->write(0x10);
  m_registerBank.start()[2]->write(0x20);
  m_registerBank.start()[0xf]->write(0xF0);

  m_memory.write(0x100, 0x200);
  m_memory.write(0x110, 0x210);
  m_memory.write(0x120, 0x220);
  m_memory.write(0x1F0, 0x2F0);

  m_memory.write(0x200, 0xAAAA);
  m_memory.write(0x210, 0x5555);
  m_memory.write(0x220, 0xAAAA);
  m_memory.write(0x2F0, 0x5555);

  m_memory.write(0, 0x5800);  // Test bit ..
  m_memory.write(1, 0x100);   // .. as address 0x100

  m_memory.write(2, 0x58F0);  // Test bit ..
  m_memory.write(3, 0x100);   // .. as address 0x100

  m_memory.write(4, 0x5801);  // Test bit ..
  m_memory.write(5, 0x100);   // .. as address 0x100 + [RX]

  m_memory.write(6, 0x58F1);  // Test bit ..
  m_memory.write(7, 0x100);   // .. as address 0x100 + [RX]

  m_memory.write(8, 0x5802);  // Test bit ..
  m_memory.write(9, 0x100);   // .. as address 0x100 + [RX]

  m_memory.write(0xA, 0x58F2);  // Test bit ..
  m_memory.write(0xB, 0x100);   // .. as address 0x100 + [RX]

  m_memory.write(0xC, 0x580F);  // Test bit ..
  m_memory.write(0xD, 0x100);   // .. as address 0x100 + [RX]

  m_memory.write(0xE, 0x58FF);  // Test bit ..
  m_memory.write(0xF, 0x100);   // .. as address 0x100 + [RX]

  bool status = true;
  m_processor.clock();
  // Test with RX = 0
  status &= tester.assert(1, m_statusWord.cs(), 0x1);

  m_processor.clock();
  status &= tester.assert(2, m_statusWord.cs(), 0x2);

  // Test with RX = 1
  m_processor.clock();
  status &= tester.assert(3, m_statusWord.cs(), 0x2);

  m_processor.clock();
  status &= tester.assert(4, m_statusWord.cs(), 0x4);

  // Test with RX = 2
  m_processor.clock();
  status &= tester.assert(4, m_statusWord.cs(), 0x1);

  m_processor.clock();
  status &= tester.assert(5, m_statusWord.cs(), 0x2);

  // Test with RX = F 
  m_processor.clock();
  status &= tester.assert(6, m_statusWord.cs(), 0x2);

  m_processor.clock();
  status &= tester.assert(7, m_statusWord.cs(), 0x4);

  return status;

}
