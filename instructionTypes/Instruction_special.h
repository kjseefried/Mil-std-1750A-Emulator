
#ifndef INSTRUCTION_SPECIAL
#define INSTRUCTION_SPECIAL

#include <string>
#include "AbstractInstruction.h"
#include "Value_i16.h"

class Instruction_special : public AbstractInstruction {

public:
    Instruction_special(opCodeRange opcode, const std::string & opcodeStr, const std::string & description);
    virtual ~Instruction_special() = 0;

    virtual void execute() const;
    virtual std::string details() const;

    inline unsigned short ocex(unsigned short int instr) const
    {
      return instr & 0xff ;
    }

    inline unsigned short oc() const
    {
      return m_data[0].msb();
    }
    inline unsigned short ocex() const
    {
      return m_data[0].lsb();
    }


protected:

private:
};

//std::ostream & operator<<(std::ostream & os, const Instruction_special & instruction);
#endif
