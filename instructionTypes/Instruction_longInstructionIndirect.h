
#ifndef INSTRUCTION_LONGINSTRUCTIONINDIRECT
#define INSTRUCTION_LONGINSTRUCTIONINDIRECT

// This is the same as a long instruction but the addressing mode is indexed, rather than direct.

#include "AbstractInstruction.h"

class Instruction_longInstructionIndirect : public AbstractInstruction {

public:
    Instruction_longInstructionIndirect(opCodeRange opcode, const std::string & opcodeStr, const std::string & description);
    virtual ~Instruction_longInstructionIndirect() = 0;

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
    inline const Value_i16 & addr() const
    {
      return m_data[1];
    }
    inline Value_i16 & addrRef() const
    {
      return m_data[1];
    }

protected:

private:
};

//std::ostream & operator<<(std::ostream & os, const Instruction_longInstructionIndirect & instruction);
#endif
