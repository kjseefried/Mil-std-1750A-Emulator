
#ifndef VALUE_I16
#define VALUE_I16

#include <iostream>

class Value_i16 {

public:
    Value_i16() : m_value(0) {}
    Value_i16(short int v) : m_value(v) {}
    Value_i16(const Value_i16&v) : m_value(v.m_value) {}
    virtual ~Value_i16() {};

    inline void increment(unsigned short int i = 1) { m_value += i ;}
    inline void decrement(unsigned short int i = 1) { m_value -= i ;}

    inline unsigned short int msb() const { return 0xff & (m_value >> 8) ;}
    inline unsigned short int lsb() const { return m_value & 0xff ;}

    inline void msb(unsigned short int v) { m_value &= 0x00ff; m_value |= ( (v & 0xff) << 8);} 
    inline void lsb(unsigned short int v) { m_value &= 0xff00; m_value |= ( (v & 0xff) );} 

    inline unsigned short int nib1() const { return 0xff & (msb() >> 4) ;}
    inline void nib1(unsigned short int v) { m_value &= 0x0fff; m_value |= ( (v & 0xf) << 12);} 
    inline unsigned short int nib2() const { return msb() & 0x0F ;}
    inline void nib2(unsigned short int v) { m_value &= 0xf0ff; m_value |= ( (v & 0xf) << 8);} 
    inline unsigned short int nib3() const { return 0xff & (lsb() >> 4) ;}
    inline void nib3(unsigned short int v) { m_value &= 0xff0f; m_value |= ( (v & 0xf) << 4);} 
    inline unsigned short int nib4() const { return lsb() & 0x0F ;}
    inline void nib4(unsigned short int v) { m_value &= 0xfff0; m_value |= ( (v & 0xf) );} 

    inline bool testBit(const unsigned short int bit) const {return ((1 << (15 - bit)) | m_value) == m_value;} 
    inline void setBit(const unsigned short int bit) {m_value |= (1 << (15 - bit));} 
    inline void resetBit(const unsigned short int bit) {m_value &= (~(1 << (15 - bit)));} 

    inline Value_i16 & shiftLeft (const unsigned int i, Value_i16 & overflow)
    {
      short unsigned int mask = ((1 << (i )) - 1) << (16 - i);
      overflow = (m_value & mask) >> (16 - i);
      *this <<= i;
      return *this;
    }
    inline Value_i16 & shiftLeftCircular (const unsigned int i)
    {
      Value_i16 overflow;
      shiftLeft(i, overflow);
      *this |= overflow;
      return *this;
    }

    inline Value_i16 & shiftRight (const unsigned int i, Value_i16 & overflow)
    {
      short unsigned int mask = ((1 << (i )) - 1);
      overflow = (m_value & mask);
      *this >>= i;
      return *this;
    }
    inline Value_i16 & shiftRightCircular (const unsigned int i)
    {
      Value_i16 overflow;
      shiftRight(i, overflow);
      *this |= (overflow << ( 16 - i));
      return *this;
    }

    inline Value_i16 & operator=(short int v) {m_value = v; return *this; }
    inline short int value() const { return m_value; }
    inline unsigned short int uvalue() const { return static_cast<unsigned short int>(m_value); }

    inline Value_i16 operator+(const Value_i16 & v) const { return Value_i16(value() + v.value()) ;}
    inline Value_i16 operator-(const Value_i16 & v) const { return Value_i16(value() - v.value()) ;}
    inline Value_i16 operator&(const Value_i16 & v) const { return Value_i16(value() & v.value()) ;}
    inline Value_i16 operator|(const Value_i16 & v) const { return Value_i16(value() | v.value()) ;}
    inline Value_i16 operator^(const Value_i16 & v) const { return Value_i16(value() ^ v.value()) ;}
    inline Value_i16  operator>>(const unsigned int i) {return Value_i16(m_value >> i); }
    inline Value_i16  operator<<(const unsigned int i) {return Value_i16(m_value << i); }

    inline Value_i16 & operator+=(const Value_i16 & v) { m_value += v.m_value; return *this;}
    inline Value_i16 & operator-=(const Value_i16 & v) { m_value -= v.m_value; return *this;}
    inline bool operator==(const Value_i16 & v) const { return m_value == v.m_value;}
    inline bool operator!=(const Value_i16 & v) const { return m_value != v.m_value;}
    inline bool operator>=(const Value_i16 & v) const { return m_value >= v.m_value;}
    inline bool operator>(const Value_i16 & v) const { return m_value > v.m_value;}
    inline bool operator<=(const Value_i16 & v) const { return m_value <= v.m_value;}
    inline bool operator<(const Value_i16 & v) const { return m_value < v.m_value;}
    inline Value_i16 & operator~() { m_value = ~m_value; return *this;}
    inline Value_i16 & operator|=(const Value_i16 & v) { m_value |= v.m_value; return *this;}
    inline Value_i16 & operator&=(const Value_i16 & v) { m_value &= v.m_value; return *this;}
    inline Value_i16 & operator^=(const Value_i16 & v)  {m_value ^= v.m_value; return *this;}
    inline Value_i16 & operator>>=(const unsigned int i)  
    {
      m_value >>= i; 
      unsigned short int mask = ~(((1 << i) - 1) << (16 - i));
      m_value &= mask; 
      return *this;
    }
    inline Value_i16 & operator<<=(const unsigned int i)  {m_value <<= i; return *this;}


    Value_i16& operator=(const Value_i16& v) { if (*this == v) return *this; m_value = v.m_value; return *this;}
protected:
    short int m_value;
private:
};

std::ostream & operator<<(std::ostream & os, const Value_i16 & v);
#endif
