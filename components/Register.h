
#ifndef REGISTER
#define REGISTER 

#include "Value_i16.h"

class Register {

public:
    Register();
    virtual ~Register();

    void increment(unsigned int i = 1) { m_value.increment(i) ;}
    void decrement(unsigned int i = 1) { m_value.decrement(i) ;}

    const Value_i16 & read() const { return m_value;}
    void write(const Value_i16 &w) { m_value = w; }

    unsigned short int value() const { return m_value.value();}
    Value_i16 & valueRef() { return m_value;}

protected:
    Value_i16 m_value;

private:
   Register(const Register &);
   Register & operator=(const Register &);
};


#endif
