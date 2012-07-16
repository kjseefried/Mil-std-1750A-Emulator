
#ifndef INSTRUCTION_EFIX
#define INSTRUCTION_EFIX

#include "Instruction_register2Register.h"

class Instruction_efix : public Instruction_register2Register {
friend class InstructionRegistry;
public:
    virtual ~Instruction_efix();
    virtual void execute() const;
private:
    Instruction_efix();
};


#endif
