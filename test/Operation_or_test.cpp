#include "Operation_or_test.h"
#include "TestHelper.h"

Operation_or_test::Operation_or_test() :
AbstractTestOperation("Or")
{
}
Operation_or_test::~Operation_or_test()
{
}

bool Operation_or_test::testOperation() const 
{
  return test_orr() & test_orb() & test_orbx() & test_or() & test_orim();
}

bool Operation_or_test::test_orr() const
{
  TestHelper tester("Test ORR");

  m_memory.write(0x00, 0xE101);
  m_memory.write(0x01, 0xE120);
  m_memory.write(0x02, 0xE1EF);
  m_memory.write(0x03, 0xE1FD);

  m_registerBank.start()[0]->write(0xF0F0);
  m_registerBank.start()[1]->write(0x000F);
  m_registerBank.start()[2]->write(0x0F00);
  m_registerBank.start()[0xD]->write(0x0100);
  m_registerBank.start()[0xE]->write(0x0001);
  m_registerBank.start()[0xF]->write(0x0010);

  m_instructionCounter.write(0);

  bool status = true;

  m_processor.clock();
  status &= tester.assert(1, m_registerBank.start()[0]->read(), 0xF0FF);
  status &= tester.assert(2, m_registerBank.start()[1]->read(), 0x00F);
  status &= tester.assert(3, m_statusWord.cs(), 0x1);

  m_processor.clock();
  status &= tester.assert(4, m_registerBank.start()[2]->read(), 0xFFFF);
  status &= tester.assert(5, m_registerBank.start()[0]->read(), 0xF0FF);
  status &= tester.assert(6, m_statusWord.cs(), 0x1);

  m_processor.clock();
  status &= tester.assert(7, m_registerBank.start()[0xE]->read(), 0x11);
  status &= tester.assert(8, m_registerBank.start()[0xF]->read(), 0x10);
  status &= tester.assert(9, m_statusWord.cs(), 0x4);

  m_processor.clock();
  status &= tester.assert(10, m_registerBank.start()[0xF]->read(), 0x110);
  status &= tester.assert(11, m_registerBank.start()[0xD]->read(), 0x100);
  status &= tester.assert(12, m_statusWord.cs(), 0x4);
  return status;
}

bool Operation_or_test::test_orb() const
{
  TestHelper tester("Test ORB");

  m_registerBank.start()[12]->write(0x100);
  m_registerBank.start()[13]->write(0x200);
  m_registerBank.start()[14]->write(0x300);
  m_registerBank.start()[15]->write(0x400);

  m_memory.write(0x100, 0x1000);
  m_memory.write(0x250, 0x2000);
  m_memory.write(0x380, 0x7000);
  m_memory.write(0x4FF, 0x8000);

  m_instructionCounter.write(0);

  m_memory.write(0x00, 0x3000);
  m_memory.write(0x01, 0x3150);
  m_memory.write(0x02, 0x3280);
  m_memory.write(0x03, 0x33FF);

  bool status = true;

  m_registerBank.start()[2]->write(0xFF);
  m_processor.clock();
  status &= tester.assert(1, m_registerBank.start()[2]->read(), 0x10FF);
  status &= tester.assert(2, m_statusWord.cs(), 0x4);
  status &= tester.assert(3, m_memory.read(0x100), 0x1000);
  
  m_registerBank.start()[2]->write(0x01);
  m_processor.clock();
  status &= tester.assert(4, m_registerBank.start()[2]->read(), 0x2001);
  status &= tester.assert(5, m_statusWord.cs(), 0x4);
  status &= tester.assert(6, m_memory.read(0x250), 0x2000);

  m_registerBank.start()[2]->write(0x01);
  m_processor.clock();
  status &= tester.assert(7, m_registerBank.start()[2]->read(), 0x7001);
  status &= tester.assert(8, m_statusWord.cs(), 0x4);
  status &= tester.assert(9, m_memory.read(0x380), 0x7000);

  m_registerBank.start()[2]->write(0x01);
  m_processor.clock();
  status &= tester.assert(10, m_registerBank.start()[2]->read(), 0x8001);
  status &= tester.assert(11, m_statusWord.cs(), 0x1);
  status &= tester.assert(12, m_memory.read(0x4ff), 0x8000);
  return status;

}

bool Operation_or_test::test_orbx() const
{
  TestHelper tester("Test ORBX");

  m_instructionCounter.write(0x00);
  m_memory.write(0x00, 0x40F0);
  m_memory.write(0x01, 0x41F1);
  m_memory.write(0x02, 0x43FF);

  m_registerBank.start()[0x0]->write(0x1000);
  m_registerBank.start()[0x1]->write(0x2000);
  m_registerBank.start()[0x3]->write(0x3000);
  m_registerBank.start()[0xC]->write(0x100);
  m_registerBank.start()[0xD]->write(0x200);
  m_registerBank.start()[0xE]->write(0x300);
  m_registerBank.start()[0xF]->write(0x400);

  m_memory.write(0x100, 0x100);
  m_memory.write(0x2200, 0x10);
  m_memory.write(0x800, 0x10);

  m_registerBank.start()[0x2]->write(0x1);
  bool status = true;

  m_processor.clock();
  status &= tester.assert(1, m_registerBank.start()[2]->read(), 0x101);
  status &= tester.assert(2, m_statusWord.cs(), 0x4);

  m_registerBank.start()[0x2]->write(0x1);
  m_processor.clock();
  status &= tester.assert(3, m_registerBank.start()[2]->read(), 0x11);
  status &= tester.assert(4, m_statusWord.cs(), 0x4);

  m_registerBank.start()[0x2]->write(0x1);
  m_processor.clock();
  status &= tester.assert(5, m_registerBank.start()[2]->read(), 0x11);
  status &= tester.assert(6, m_statusWord.cs(), 0x4);
  return status;

}

bool Operation_or_test::test_or() const
{
  TestHelper tester("Test OR");

  m_memory.write(0x00, 0xE000);
  m_memory.write(0x01, 0x100);
  
  m_memory.write(0x02, 0xE001);
  m_memory.write(0x03, 0x200);

  m_memory.write(0x04, 0xE01F);
  m_memory.write(0x05, 0x300);

  m_instructionCounter.write(0);

  m_registerBank.start()[0]->write(0x10);
  m_registerBank.start()[1]->write(0x20);
  m_registerBank.start()[0xf]->write(0xF0);

  m_memory.write(0x100, 0x1);
  m_memory.write(0x220, 0x100);
  m_memory.write(0x3F0, 0x200);

  bool status = true;
  m_processor.clock();
  status &= tester.assert(1, m_registerBank.start()[0]->read(), 0x11);
  status &= tester.assert(2, m_statusWord.cs(), 0x4);
 
  m_processor.clock();
  status &= tester.assert(3, m_registerBank.start()[0]->read(), 0x111);
  status &= tester.assert(4, m_statusWord.cs(), 0x4);

  m_processor.clock();
  status &= tester.assert(4, m_registerBank.start()[1]->read(), 0x220);
  status &= tester.assert(5, m_statusWord.cs(), 0x4);
 
  return status;
}

bool Operation_or_test::test_orim() const
{
  TestHelper tester("Test ORIM");

  m_memory.write(0x0, 0x4A08);
  m_memory.write(0x1, 0x5555);

  m_memory.write(0x2, 0x4A18);
  m_memory.write(0x3, 0x0000);

  m_memory.write(0x4, 0x4A78);
  m_memory.write(0x5, 0x000F);

  m_memory.write(0x6, 0x4A88);
  m_memory.write(0x7, 0x0F00);

  m_memory.write(0x8, 0x4AF8);
  m_memory.write(0x9, 0xF000);

  m_instructionCounter.write(0);
  m_registerBank.start()[0]->write(0xAAAA);
  m_registerBank.start()[1]->write(0x0000);
  m_registerBank.start()[7]->write(0xFF00);
  m_registerBank.start()[8]->write(0x00F0);
  m_registerBank.start()[0xF]->write(0x0FF0);

  bool status = true;

  m_processor.clock();
  status &= tester.assert(1, m_registerBank.start()[0]->read(), 0xFFFF);
  status &= tester.assert(2, m_statusWord.cs(), 0x1);

  m_processor.clock();
  status &= tester.assert(3, m_registerBank.start()[1]->read(), 0x0000);
  status &= tester.assert(4, m_statusWord.cs(), 0x2);

  m_processor.clock();
  status &= tester.assert(5, m_registerBank.start()[7]->read(), 0xFF0F);
  status &= tester.assert(6, m_statusWord.cs(), 0x1);

  m_processor.clock();
  status &= tester.assert(7, m_registerBank.start()[8]->read(), 0x0FF0);
  status &= tester.assert(8, m_statusWord.cs(), 0x4);

  m_processor.clock();
  status &= tester.assert(9, m_registerBank.start()[0xF]->read(), 0xFFF0);
  status &= tester.assert(10, m_statusWord.cs(), 0x1);
  return status;
}
