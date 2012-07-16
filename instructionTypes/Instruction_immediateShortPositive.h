
#ifndef INSTRUCTION_IMMEDIATESHORTPOS
#define INSTRUCTION_IMMEDIATESHORTPOS

#include "AbstractInstruction.h"

class Instruction_immediateShortPositive : public AbstractInstruction {

public:
    Instruction_immediateShortPositive(opCodeRange opcode, const std::string & opcodeStr, const std::string & description);
    virtual ~Instruction_immediateShortPositive() = 0;

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

//std::ostream & operator<<(std::ostream & os, const Instruction_immediateShortPositive & instruction);
#endif
