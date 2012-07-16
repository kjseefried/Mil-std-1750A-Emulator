
#ifndef INSTRUCTION_BASERELATIVEINDEXED
#define INSTRUCTION_BASERELATIVEINDEXED

#include <string>
#include "InstructionConstants.h"
#include "AbstractInstruction.h"
#include "Value_i16.h"


class Instruction_baseRelativeIndexed : public AbstractInstruction {

public:
    Instruction_baseRelativeIndexed(opCodeRange opcode, char ocex, unsigned short int ra, const std::string & opcodeStr, const std::string & description);
    virtual ~Instruction_baseRelativeIndexed() = 0;

    virtual void execute() const;
    virtual std::string details() const;

    inline unsigned short ocex(unsigned short int instr) const
    {
      return (instr & 0xff) >> 4 ;
    }

    inline unsigned short oc() const
    {
      return (m_data[0].msb() & 0xFC) >> 2;
    }
    inline unsigned short br() const
    {
      return m_data[0].msb() & 0x3;
    }
    inline unsigned short reg() const
    {
      return m_ra;
    }
    inline unsigned short baseRegister() const
    {
      return br() + BASE_REGISTER;
    }
    inline unsigned short ocex() const
    {
      return m_data[0].nib3();
    }
    inline unsigned short rx() const
    {
      return m_data[0].nib4();
    }

protected:
    unsigned short int m_ra;
private:
};

//std::ostream & operator<<(std::ostream & os, const Instruction_baseRelativeIndexed & instruction);

#endif
