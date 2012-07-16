
#ifndef INSTRUCTION_BASERELATIVE
#define INSTRUCTION_BASERELATIVE

#include <string>
#include "AbstractInstruction.h"
#include "InstructionConstants.h"
#include "Value_i16.h"


class Instruction_baseRelative : public AbstractInstruction {

public:
    Instruction_baseRelative(opCodeRange opcode, const unsigned short int ra, const std::string & opcodeStr, const std::string & description);
    virtual ~Instruction_baseRelative() = 0;

    virtual void execute() const;
    virtual std::string details() const;

    inline unsigned short reg() const {return m_ra;}

    inline unsigned short oc() const
    {
      return (m_data[0].msb() & 0xFC) >> 2;
    }
    inline unsigned short br() const
    {
      return m_data[0].msb() & 0x3;
    }
    inline unsigned short baseRegister() const
    {
      return br() + BASE_REGISTER;
    }
    inline unsigned short displacement() const
    {
      return m_data[0].lsb();
    }


protected:
    unsigned int m_ra;
private:
};

//std::ostream & operator<<(std::ostream & os, const Instruction_baseRelative & instruction);
#endif
