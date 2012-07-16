
#ifndef INSTRUCTION_NEG
#define INSTRUCTION_NEG

#include "Instruction_register2Register.h"

class Instruction_neg : public Instruction_register2Register {
friend class InstructionRegistry;
public:
    virtual ~Instruction_neg();
    virtual void execute() const;
private:
    Instruction_neg();
};


#endif
