
#ifndef PAGE_REGISTERS
#define PAGE_REGISTERS
#include "PageRegisterGroup.h"
#include "StatusWord.h"

class PageRegisters {

public:
    PageRegisters();
    virtual ~PageRegisters();

    Value_i16 address(const PageRegisterSet set, const Value_i16 & shortAddress) const;
    inline void writeInstructionRegister(const unsigned short group, const unsigned short reg, const Value_i16 & v)
    {
      m_pageRegisterGroup[group].write(PRS_INS, reg, v);
    }
    inline void writeOperandRegister(const unsigned short group, const unsigned short reg, const Value_i16 & v)
    {
      m_pageRegisterGroup[group].write(PRS_OP, reg, v);
    }
    void dump(const unsigned short group, const unsigned short reg) const;
    void dump(const unsigned short group) const;

protected:
    PageRegisterGroup m_pageRegisterGroup[16]; 
private:
    PageRegisters(const PageRegisters &);
    PageRegisters& operator=(const PageRegisters &);
};


#endif
