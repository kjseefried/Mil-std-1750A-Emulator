
#ifndef INSTRUCTION_FA
#define INSTRUCTION_FA

#include "Instruction_longInstruction.h"

class Instruction_fa : public Instruction_longInstruction {
friend class InstructionRegistry;
public:
    virtual ~Instruction_fa();
    virtual void execute() const;
private:
    Instruction_fa();
};


#endif
