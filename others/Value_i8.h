
#ifndef VALUE_I8
#define VALUE_I8

class Value_i8 {

public:
    Value_i8() : m_value(0) {}
    Value_i8(short int v) : m_value(v % 0x100) {}
    virtual ~Value_i8() {};

    void increment(unsigned short int i = 1) { m_value += i ; m_value %= 0x100;}
    void decrement(unsigned short int i = 1) { m_value -= i ; m_value %= 0x100;}

    unsigned short int nib1() const { return 0xff & (m_value >> 4) ;}
    unsigned short int nib2() const { return m_value & 0x0F ;}

    Value_i8 & operator=(short int v) {m_value = v;  m_value %= 0x100;}
    short int value() const { return m_value; }

protected:
    short int m_value;
private:
};


#endif
