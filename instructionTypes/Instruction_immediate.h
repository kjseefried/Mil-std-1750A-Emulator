
#ifndef INSTRUCTION_IMMEDIATE
#define INSTRUCTION_IMMEDIATE

#include "AbstractInstruction.h"

class Instruction_immediate : public AbstractInstruction {

public:
    Instruction_immediate(opCodeRange opcode, char ocex, const std::string & opcodeStr, const std::string & description);
    virtual ~Instruction_immediate() = 0;

    virtual void execute() const;
    virtual std::string details() const;

    inline unsigned short ocex(unsigned short int instr) const
    {
      return instr & 0x0f ;
    }

    inline unsigned short oc() const
    {
      return m_data[0].msb();
    }

    inline unsigned short gr1() const
    {
      return m_data[0].nib3();
    }
    inline unsigned short ocex() const
    {
      return m_data[0].nib4();
    }
    inline const Value_i16 & data() const
    {
      return m_data[1];
    }
    inline Value_i16 & dataRef() const
    {
      return m_data[1];
    }

protected:

private:
};

//std::ostream & operator<<(std::ostream & os, const Instruction_immediate & instruction);
#endif
