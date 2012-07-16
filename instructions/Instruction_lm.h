
#ifndef INSTRUCTION_LM
#define INSTRUCTION_LM

#include "Instruction_longInstruction.h"

class Instruction_lm : public Instruction_longInstruction {
friend class InstructionRegistry;
public:
    virtual ~Instruction_lm();
    virtual void execute() const;
private:
    Instruction_lm();
};


#endif
