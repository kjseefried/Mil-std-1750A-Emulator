
#ifndef INSTRUCTION_DV
#define INSTRUCTION_DV

#include "Instruction_longInstruction.h"

class Instruction_dv : public Instruction_longInstruction {
friend class InstructionRegistry;
public:
    virtual ~Instruction_dv();
    virtual void execute() const;
private:
    Instruction_dv();
};


#endif
