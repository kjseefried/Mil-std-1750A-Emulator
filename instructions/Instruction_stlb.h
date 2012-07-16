
#ifndef INSTRUCTION_STLB
#define INSTRUCTION_STLB

#include "Instruction_longInstruction.h"

class Instruction_stlb : public Instruction_longInstruction {
friend class InstructionRegistry;
public:
    virtual ~Instruction_stlb();
    virtual void execute() const;
private:
    Instruction_stlb();
};


#endif
