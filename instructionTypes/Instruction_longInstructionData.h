
#ifndef INSTRUCTION_LONGINSTRUCTIONDATA
#define INSTRUCTION_LONGINSTRUCTIONDATA

// This is the same as a long instruction but the addressing mode is indexed, rather than direct.

#include "AbstractInstruction.h"

class Instruction_longInstructionData : public AbstractInstruction {

public:
    Instruction_longInstructionData(opCodeRange opcode, const std::string & opcodeStr, const std::string & description);
    virtual ~Instruction_longInstructionData() = 0;

    virtual void execute() const;
    virtual std::string details() const;

    inline unsigned short oc() const
    {
      return m_data[0].msb();
    }

    inline unsigned short gr1() const
    {
      return m_data[0].nib3();
    }
    inline unsigned short rx() const
    {
      return m_data[0].nib4();
    }
    inline unsigned short data() const
    {
      return m_data[1].value();
    }


protected:

private:
};

//std::ostream & operator<<(std::ostream & os, const Instruction_longInstructionData & instruction);
#endif
