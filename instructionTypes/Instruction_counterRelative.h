
#ifndef INSTRUCTION_COUNTERRELATIVE
#define INSTRUCTION_COUNTERRELATIVE

#include <string>
#include "AbstractInstruction.h"
#include "Value_i16.h"

class Instruction_counterRelative : public AbstractInstruction {

public:
    Instruction_counterRelative(opCodeRange opcode, const std::string & opcodeStr, const std::string & description);
    virtual ~Instruction_counterRelative() = 0;

//    virtual void print() const;
    virtual void execute() const;
    virtual std::string details() const;

    inline unsigned short oc() const
    {
      return m_data[0].msb();
    }
    inline unsigned short displacement() const
    {
      return m_data[0].lsb();
    }


protected:

private:
};

//std::ostream & operator<<(std::ostream & os, const Instruction_counterRelative & instruction);
#endif
