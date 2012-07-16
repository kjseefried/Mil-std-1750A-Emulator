
#ifndef PAGE_REGISTER_GROUP
#define PAGE_REGISTER_GROUP
#include "PageRegister.h"

enum PageRegisterSet
{
  PRS_OP = 0,
  PRS_INS = 1
};

class PageRegisterGroup {

public:
    PageRegisterGroup();
    virtual ~PageRegisterGroup();

    inline void write(const PageRegisterSet set, const unsigned short reg, const Value_i16 & v)
    {
      m_pageRegisters[set][reg].write(v);
    }

    inline const PageRegister & pageRegister(const PageRegisterSet set, const unsigned short reg)  const
    {
      return m_pageRegisters[set][reg];
    }

    void dump(const unsigned short set) const;

protected:
    PageRegister m_pageRegisters[2][16]; 
private:
    PageRegisterGroup(const PageRegisterGroup &);
    PageRegisterGroup& operator=(const PageRegisterGroup &);
};


#endif
