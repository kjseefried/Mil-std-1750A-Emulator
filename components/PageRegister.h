
#ifndef PAGE_REGISTER
#define PAGE_REGISTER
#include "Value_i16.h"
#include "Value_i32.h"
#include "Register.h"

class PageRegister : public Register{

public:
    PageRegister();
    virtual ~PageRegister();

    inline unsigned short al() const { return m_value.nib1();}    
    inline void al(unsigned short a) { m_value.nib1(a);}    
    inline unsigned short ew() const { return m_value.nib2() >> 3;}    
    inline void ew(unsigned short e) { m_value.nib2(m_value.nib2() & (e << 3));}    
    inline unsigned short ppa() const { return m_value.lsb();}    
    inline void ppa(unsigned short p) { m_value.lsb(p);}

    void dump() const;

protected:

private:
};


#endif
