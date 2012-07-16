
#ifndef INSTRUCTION_FAR
#define INSTRUCTION_FAR

#include "Instruction_register2Register.h"

class Instruction_far : public Instruction_register2Register {
friend class InstructionRegistry;
public:
    virtual ~Instruction_far();
    virtual void execute() const;
private:
    Instruction_far();
};


#endif
