
#ifndef INSTRUCTION_INCM
#define INSTRUCTION_INCM

#include "Instruction_longInstruction.h"

class Instruction_incm : public Instruction_longInstruction {
friend class InstructionRegistry;
public:
    virtual ~Instruction_incm();
    virtual void execute() const;
private:
    Instruction_incm();
};


#endif
