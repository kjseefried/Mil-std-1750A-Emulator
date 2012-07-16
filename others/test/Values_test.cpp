#include <iostream>
#include "Value_i8.h"
#include "Value_i16.h"
#include "Value_i32.h"

bool test_Value_i8();
bool test_Value_i16();
bool test_Value_i32();

int main()
{
  test_Value_i8();
  test_Value_i16();
  test_Value_i32();
}

bool test_Value_i8()
{
  Value_i8 v(300);
  std::cout << std::hex << v.value() << std::endl;
  std::cout << std::hex << v.nib1() << std::endl;
  std::cout << std::hex << v.nib2() << std::endl;

  
}
bool test_Value_i16()
{
   Value_i16 v(0xcccc);

   std::cout << v.testBit(0) << std::endl;
   std::cout << v.testBit(3) << std::endl;
   std::cout << v.testBit(15) << std::endl;
   v.setBit(1);
   v.setBit(0);
   v.setBit(2);
   v.setBit(3);
   std::cout << std::hex << v.value() << std::endl;
   v.resetBit(2);
   v.resetBit(3);
   std::cout << std::hex << v.value() << std::endl;


   Value_i16 v1(0xabcd);
   std::cout << "-------------------------" << std::endl;
   std::cout << v1 << std::endl;//v1.shiftLeftCircular(3) << std::endl;
   std::cout << v1.shiftLeftCircular(3) << std::endl;
   std::cout << v1.shiftLeftCircular(5) << std::endl;
   std::cout << v1.shiftLeftCircular(2) << std::endl;
   std::cout << v1.shiftLeftCircular(6) << std::endl;

   std::cout << "-------------------------" << std::endl;
   std::cout << v1.shiftRightCircular(6) << std::endl;
   std::cout << v1.shiftRightCircular(2) << std::endl;
   std::cout << v1.shiftRightCircular(5) << std::endl;
   std::cout << v1.shiftRightCircular(3) << std::endl;
   std::cout << "-------------------------" << std::endl;

}
bool test_Value_i32()
{
  short int i1 = 0x1111;
  short int i2 = 0x2222;
  short int i3 = 0xffff;
  short int i4 = 0xffff;

  Value_i16 v1(i1);
  Value_i16 v2(i2);
  Value_i16 v3(i3);
  Value_i16 v4(i4);

  Value_i32 V3(v1, v2);
  Value_i32 V4(v3, v4);
  
  std::cout << V3 << std::endl;
  std::cout << V4 << std::endl;
  V4 += V3;

  std::cout << V4 << std::endl;

}
