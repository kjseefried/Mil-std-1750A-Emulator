
#ifndef INSTRUCTION_LLB
#define INSTRUCTION_LLB

#include "Instruction_longInstruction.h"

class Instruction_llb : public Instruction_longInstruction {
friend class InstructionRegistry;
public:
    virtual ~Instruction_llb();
    virtual void execute() const;
private:
    Instruction_llb();
};


#endif
