
#ifndef INSTRUCTION_XBR
#define INSTRUCTION_XBR

#include "Instruction_register2Register.h"

class Instruction_xbr : public Instruction_register2Register {
friend class InstructionRegistry;
public:
    virtual ~Instruction_xbr();
    virtual void execute() const;
private:
    Instruction_xbr();
};


#endif
