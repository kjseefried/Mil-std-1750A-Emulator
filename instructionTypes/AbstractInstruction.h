
#ifndef ABSTRACT_INSTRUCTION
#define ABSTRACT_INSTRUCTION 
#include <iostream>
#include <string>
#include "Value_i16.h"
#include "AbstractOperation.h"

struct opCodeRange{
  unsigned char low;
  unsigned char high;
};

class AbstractInstruction {

public:
    AbstractInstruction(unsigned short int size, opCodeRange opcode, char ocex, const std::string & opcodeStr, const std::string & description);
    virtual ~AbstractInstruction() = 0;
    void clear();
    // This should be overridden by any subclass that has opcode extensions and should return the ocex derived from the
    // passed instruction word
    virtual unsigned short ocex(unsigned short int instr) const;

    unsigned short ocex() const { return m_ocex ;}
    unsigned short int size() const { return m_size; }
    bool more() const { return m_position < m_size; }
    void setData(const Value_i16 & v) const;

    std::string data() const;

    opCodeRange opcodeRange() const {return m_opcodeRange;}
    const std::string & opcode_str() const { return m_opcodeStr ;}
    const std::string & description () const { return m_description ;}
    virtual std::string details () const;

    void setOperation(AbstractOperation * operation) {m_operation = operation;}

//    virtual void print() const = 0;
    virtual void execute() const;
    inline AbstractOperation * operation() const { return m_operation; }


protected:
    mutable Value_i16 * m_data;

private:
    unsigned short int m_size;
    mutable unsigned short int m_position;
    opCodeRange m_opcodeRange;
    char m_ocex;
    const std::string & m_opcodeStr;
    const std::string & m_description;
    AbstractOperation * m_operation;
};

//std::ostream & operator<<(std::ostream & os, const AbstractInstruction & instruction);

#endif
