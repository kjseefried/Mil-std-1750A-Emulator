
#ifndef INSTRUCTION_DSCR
#define INSTRUCTION_DSCR

#include "Instruction_register2Register.h"

class Instruction_dscr : public Instruction_register2Register {
friend class InstructionRegistry;
public:
    virtual ~Instruction_dscr();
    virtual void execute() const;
private:
    Instruction_dscr();
};


#endif
