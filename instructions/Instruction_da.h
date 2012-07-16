
#ifndef INSTRUCTION_DA
#define INSTRUCTION_DA

#include "Instruction_longInstruction.h"

class Instruction_da : public Instruction_longInstruction {
friend class InstructionRegistry;
public:
    virtual ~Instruction_da();
    virtual void execute() const;
private:
    Instruction_da();
};


#endif
