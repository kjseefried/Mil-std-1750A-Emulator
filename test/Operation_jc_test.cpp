#include "Operation_jc_test.h"
#include "TestHelper.h"

Operation_jc_test::Operation_jc_test() :
AbstractTestOperation("Test Bit")
{
}
Operation_jc_test::~Operation_jc_test()
{
}

bool Operation_jc_test::testOperation() const 
{
  return test_jc() && test_jci();
}

bool Operation_jc_test::test_jc() const
{
  TestHelper tester("Test JC");

  m_registerBank.start()[8]->write(0x100);

  bool status = true;
  // NOP
  m_memory.write(0x00, 0x7000);
  m_memory.write(0x01, 0x0100);
  m_instructionCounter.write(0);
  m_processor.clock();
  status &= tester.assert(1, m_instructionCounter.read(), 0x02);

  // < 0
  m_memory.write(0x00, 0x7018);
  m_memory.write(0x01, 0x0100);
  m_statusWord.setCs(-1);
  m_instructionCounter.write(0);
  m_processor.clock();
  status &= tester.assert(2, m_instructionCounter.read(), 0x0200);

  // < 0
  m_memory.write(0x00, 0x7018);
  m_memory.write(0x01, 0x0100);
  m_statusWord.setCs(0);
  m_instructionCounter.write(0);
  m_processor.clock();
  status &= tester.assert(3, m_instructionCounter.read(), 0x2);

  // = 0
  m_memory.write(0x00, 0x7020);
  m_memory.write(0x01, 0x0100);
  m_statusWord.setCs(0);
  m_instructionCounter.write(0);
  m_processor.clock();
  status &= tester.assert(4, m_instructionCounter.read(), 0x100);

  // = 0
  m_memory.write(0x00, 0x7020);
  m_memory.write(0x01, 0x0100);
  m_statusWord.setCs(1);
  m_instructionCounter.write(0);
  m_processor.clock();
  status &= tester.assert(5, m_instructionCounter.read(), 0x02);

  // <= 0
  m_memory.write(0x00, 0x7030);
  m_memory.write(0x01, 0x0100);
  m_statusWord.setCs(1);
  m_instructionCounter.write(0);
  m_processor.clock();
  status &= tester.assert(6, m_instructionCounter.read(), 0x02);
 
  // <= 0
  m_memory.write(0x00, 0x7030);
  m_memory.write(0x01, 0x0100);
  m_statusWord.setCs(0);
  m_instructionCounter.write(0);
  m_processor.clock();
  status &= tester.assert(7, m_instructionCounter.read(), 0x100);

  // <= 0
  m_memory.write(0x00, 0x7030);
  m_memory.write(0x01, 0x0100);
  m_statusWord.setCs(-1);
  m_instructionCounter.write(0);
  m_processor.clock();
  status &= tester.assert(8, m_instructionCounter.read(), 0x100);

  // > 0
  m_memory.write(0x00, 0x7040);
  m_memory.write(0x01, 0x0100);
  m_statusWord.setCs(-1);
  m_instructionCounter.write(0);
  m_processor.clock();
  status &= tester.assert(9, m_instructionCounter.read(), 0x2);

  // > 0
  m_memory.write(0x00, 0x7040);
  m_memory.write(0x01, 0x0100);
  m_statusWord.setCs(0);
  m_instructionCounter.write(0);
  m_processor.clock();
  status &= tester.assert(10, m_instructionCounter.read(), 0x2);

  // > 0
  m_memory.write(0x00, 0x7040);
  m_memory.write(0x01, 0x0100);
  m_statusWord.setCs(1);
  m_instructionCounter.write(0);
  m_processor.clock();
  status &= tester.assert(11, m_instructionCounter.read(), 0x100);

  // != 0
  m_memory.write(0x00, 0x7050);
  m_memory.write(0x01, 0x0100);
  m_statusWord.setCs(1);
  m_instructionCounter.write(0);
  m_processor.clock();
  status &= tester.assert(12, m_instructionCounter.read(), 0x100);

  // != 0
  m_memory.write(0x00, 0x7050);
  m_memory.write(0x01, 0x0100);
  m_statusWord.setCs(-1);
  m_instructionCounter.write(0);
  m_processor.clock();
  status &= tester.assert(13, m_instructionCounter.read(), 0x100);

  // != 0
  m_memory.write(0x00, 0x7050);
  m_memory.write(0x01, 0x0100);
  m_statusWord.setCs(0);
  m_instructionCounter.write(0);
  m_processor.clock();
  status &= tester.assert(14, m_instructionCounter.read(), 0x2);

  // >= 0
  m_memory.write(0x00, 0x7060);
  m_memory.write(0x01, 0x0100);
  m_statusWord.setCs(0);
  m_instructionCounter.write(0);
  m_processor.clock();
  status &= tester.assert(15, m_instructionCounter.read(), 0x100);

  // >= 0
  m_memory.write(0x00, 0x7060);
  m_memory.write(0x01, 0x0100);
  m_statusWord.setCs(1);
  m_instructionCounter.write(0);
  m_processor.clock();
  status &= tester.assert(16, m_instructionCounter.read(), 0x100);

  // >= 0
  m_memory.write(0x00, 0x7060);
  m_memory.write(0x01, 0x0100);
  m_statusWord.setCs(-1);
  m_instructionCounter.write(0);
  m_processor.clock();
  status &= tester.assert(17, m_instructionCounter.read(), 0x2);

  // unconditional
  m_memory.write(0x00, 0x7070);
  m_memory.write(0x01, 0x0100);
  m_statusWord.setCs(-1);
  m_instructionCounter.write(0);
  m_processor.clock();
  status &= tester.assert(18, m_instructionCounter.read(), 0x100);

  // unconditional
  m_memory.write(0x00, 0x7070);
  m_memory.write(0x01, 0x0100);
  m_statusWord.setCs(1);
  m_instructionCounter.write(0);
  m_processor.clock();
  status &= tester.assert(19, m_instructionCounter.read(), 0x100);

  // unconditional
  m_memory.write(0x00, 0x7070);
  m_memory.write(0x01, 0x0100);
  m_statusWord.setCs(0);
  m_instructionCounter.write(0);
  m_processor.clock();
  status &= tester.assert(20, m_instructionCounter.read(), 0x100);


  return status;

}
bool Operation_jc_test::test_jci() const
{
  TestHelper tester("Test JCI");

  m_instructionCounter.write(0);

  bool status = true;

  return status;

}
