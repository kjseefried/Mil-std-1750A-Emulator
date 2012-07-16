
#ifndef INSTRUCTION_OR
#define INSTRUCTION_OR

#include "Instruction_longInstruction.h"

class Instruction_or : public Instruction_longInstruction {
friend class InstructionRegistry;
public:
    virtual ~Instruction_or();
    virtual void execute() const;
private:
    Instruction_or();
};


#endif
