
#ifndef VALUE_I32
#define VALUE_I32

#include "Value_i16.h"
#include <iostream>

class Value_i32 {

public:
    Value_i32(Value_i16 & v1,Value_i16 & v2) : m_v1(v1), m_v2(v2), m_carry(false) {}
    Value_i32(const Value_i32&v) : m_v1(v.m_v1),m_v2(v.m_v2), m_carry(v.m_carry) {}
    virtual ~Value_i32() {};

/*
    inline void increment(unsigned short int i = 1) { m_value += i ;}
    inline void decrement(unsigned short int i = 1) { m_value -= i ;}
*/
    inline Value_i16 & msv() const { return m_v1 ;}
    inline Value_i32 & msv(const Value_i16 & v) { m_v1 = v; return *this ;}
    inline Value_i16 & lsv() const { return m_v2 ;}
    inline Value_i32 & lsv(const Value_i16 & v) { m_v2 = v; return *this ;}

    inline bool carry() const { return m_carry; }

    inline bool testBit(const unsigned short int bit) const
    {
      if (bit < 16)
      {
        return (m_v1.testBit)(bit);
      }
      else
      {
        return (m_v2.testBit)(bit - 16);
      }
    }
    inline void setBit(const unsigned short int bit)
    {
      if (bit < 16)
      {
        m_v1.setBit(bit);
      }
      else
      {
        m_v2.setBit(bit - 16);
      }
    }

    inline void resetBit(const unsigned short int bit)
    {
      if (bit < 16)
      {
        m_v1.resetBit(bit);
      }
      else
      {
        m_v2.resetBit(bit - 16);
      }
    }

/*
    Value_i16 operator+(const Value_i16 & v) const { return Value_i16(value() + v.value()) ;}
    Value_i16 operator-(const Value_i16 & v) const { return Value_i16(value() - v.value()) ;}
    Value_i16 operator&(const Value_i16 & v) const { return Value_i16(value() & v.value()) ;}
    Value_i16 operator|(const Value_i16 & v) const { return Value_i16(value() | v.value()) ;}
    Value_i16 operator^(const Value_i16 & v) const { return Value_i16(value() ^ v.value()) ;}

    inline Value_i16 & operator+=(const Value_i16 & v) { m_value += v.m_value; return *this;}
    inline Value_i16 & operator-=(const Value_i16 & v) { m_value -= v.m_value; return *this;}
*/
    inline bool operator==(const Value_i32 & v) const { return (m_v1 == v.m_v1) && (m_v2 == v.m_v2);}
    inline bool operator!=(const Value_i32 & v) const { return (m_v1 != v.m_v1) || (m_v2 != v.m_v2);}
/*
    inline bool operator>=(const Value_i16 & v) const { return m_value >= v.m_value;}
    inline bool operator>(const Value_i16 & v) const {return m_value > v.m_value;}
    inline bool operator<=(const Value_i16 & v) const { return m_value <= v.m_value;}
    inline bool operator<(const Value_i16 & v) const { return m_value < v.m_value;}
    inline Value_i16 & operator~() { m_value = ~m_value; return *this;}
    inline Value_i16 & operator|=(const Value_i16 & v) { m_value |= v.m_value; return *this;}
    inline Value_i16 & operator&=(const Value_i16 & v) { m_value &= v.m_value; return *this;}
    inline Value_i16 & operator^=(const Value_i16 & v)  {m_value ^= v.m_value; return *this;}
*/
    inline Value_i32 & operator+=(const Value_i32 & rhs)
    {
      m_v1 += rhs.m_v1;
      Value_i16 v = m_v2 + rhs.m_v2;
      if ((v < m_v2) || ( v < rhs.m_v2))
      {
        m_carry = true;
        m_v1 += 1;
      }
      else
      {
        m_carry = false;
      }
      m_v2 = v;
      return *this;
    }

    inline Value_i32 & operator<<=(const unsigned int i) 
    {
      m_v1 <<= i;
      Value_i16 overflow;
      m_v2.shiftLeft(i, overflow);
      m_v1 |= overflow;
      return *this;
    }
    inline Value_i32 & operator>>=(const unsigned int i)
    {
      m_v2 >>= i;
      Value_i16 overflow;
      m_v1.shiftRight(i, overflow);
      m_v2 |= (overflow << (16 -i));
      return *this;
 
    }

    Value_i32& operator=(const Value_i32& v) { if (*this == v) return *this; m_v1 = v.m_v1; m_v2 = v.m_v2; return *this;}
protected:
    Value_i16 & m_v1;
    Value_i16 & m_v2;
    bool m_carry;
private:
};

std::ostream & operator<<(std::ostream & os, const Value_i32 & v);
#endif
