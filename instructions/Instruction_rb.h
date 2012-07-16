
#ifndef INSTRUCTION_RB
#define INSTRUCTION_RB

#include "Instruction_longInstruction.h"

class Instruction_rb : public Instruction_longInstruction {
friend class InstructionRegistry;
public:
    virtual ~Instruction_rb();
    virtual void execute() const;
private:
    Instruction_rb();
};


#endif
