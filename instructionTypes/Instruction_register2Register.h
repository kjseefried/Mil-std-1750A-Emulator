
#ifndef INSTRUCTION_REGISTER2REGISTER
#define INSTRUCTION_REGISTER2REGISTER

#include <string>
#include "AbstractInstruction.h"
#include "Value_i16.h"

class Instruction_register2Register : public AbstractInstruction {

public:
    Instruction_register2Register(opCodeRange opcode, const std::string & opcodeStr, const std::string & description);
    virtual ~Instruction_register2Register() = 0;

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
    inline unsigned short gr2() const
    {
      return m_data[0].nib4();
    }

protected:

private:
};

//std::ostream & operator<<(std::ostream & os, const Instruction_register2Register & instruction);

#endif
