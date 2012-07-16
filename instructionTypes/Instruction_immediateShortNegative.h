
#ifndef INSTRUCTION_IMMEDIATESHORTNEG
#define INSTRUCTION_IMMEDIATESHORTNEG

#include "AbstractInstruction.h"

class Instruction_immediateShortNegative : public AbstractInstruction {

public:
    Instruction_immediateShortNegative(opCodeRange opcode, const std::string & opcodeStr, const std::string & description);
    virtual ~Instruction_immediateShortNegative() = 0;

    virtual void execute() const;
    virtual std::string details() const;

    inline unsigned short oc() const
    {
      return m_data[0].msb();
    }

    inline unsigned short ra() const
    {
      return m_data[0].nib3();
    }
    inline unsigned short n() const
    {
      return m_data[0].nib4() + 1;
    }


protected:

private:
};

//std::ostream & operator<<(std::ostream & os, const Instruction_immediateShortNegative & instruction);
#endif
