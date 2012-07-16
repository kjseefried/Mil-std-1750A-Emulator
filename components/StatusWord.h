
#ifndef STATUS_WORD
#define STATUS_WORD
#include "Value_i16.h"
#include "Value_i32.h"
#include "Register.h"

class StatusWord : public Register{

public:
    StatusWord();
    virtual ~StatusWord();

    inline unsigned short cs() const { return m_value.nib1();}    
    inline void cs(unsigned short c) { m_value.nib1(c);}    
    inline unsigned short ps() const { return m_value.nib3();}    
    inline void ps(unsigned short p) { m_value.nib3(p);}    
    inline unsigned short as() const { return m_value.nib4();}    
    inline void as(unsigned short a) { m_value.nib4(a);}

    inline void setCs(const Value_i32 & v)
    {
      if (v.msv() == 0)
      {
        setCs(v.lsv(), v.carry());
      }
      else
      {
        setCs(v.msv(), v.carry());
      }

    }

    inline void setCs(const Value_i16 & v, bool carry = false)
    {
      setCs(v.value(), carry);
    }
    inline void setCs(short int c, bool carry = false)
    {   
      unsigned short cf = 0;
      if (carry)
      {
        cf = 0x8;
      }
      if (c == 0)
      { 
        cs(0x2 | cf);
      } 
      else if (c < 0)
      { 
        cs(0x1 | cf);
      } 
      else
      {
        cs(0x4 | cf);
      }
    }

    inline bool lz() const { return (cs() == 0x1); }
    inline bool ez() const { return (cs() == 0x2); }
    inline bool nz() const { return (cs() == 0x4) || (cs() == 0x1); }
    inline bool lez() const { return (cs() == 0x2) || (cs() == 0x2); }
    inline bool gez() const { return (cs() == 0x4) || (cs() == 0x2); }
    inline bool gz() const { return cs() == 0x4 ; }

    void dump() const;

protected:

private:
};


#endif
