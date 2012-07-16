
#ifndef INSTRUCTION_LONGINSTRUCTION
#define INSTRUCTION_LONGINSTRUCTION

#include "AbstractInstruction.h"

class Instruction_longInstruction : public AbstractInstruction {

public:
    Instruction_longInstruction(opCodeRange opcode, const std::string & opcodeStr, const std::string & description);
    virtual ~Instruction_longInstruction() = 0;

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

//std::ostream & operator<<(std::ostream & os, const Instruction_longInstruction & instruction);
#endif
