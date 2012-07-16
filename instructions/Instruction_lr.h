
#ifndef INSTRUCTION_LR
#define INSTRUCTION_LR

#include "Instruction_register2Register.h"

class Instruction_lr : public Instruction_register2Register {
friend class InstructionRegistry;
public:
    virtual ~Instruction_lr();
    virtual void execute() const;
private:
    Instruction_lr();
};


#endif
