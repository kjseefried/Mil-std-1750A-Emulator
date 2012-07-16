
#ifndef INSTRUCTION_D
#define INSTRUCTION_D

#include "Instruction_longInstruction.h"

class Instruction_d : public Instruction_longInstruction {
friend class InstructionRegistry;
public:
    virtual ~Instruction_d();
    virtual void execute() const;
private:
    Instruction_d();
};


#endif
