
#ifndef INSTRUCTION_JCI
#define INSTRUCTION_JCI

#include "Instruction_longInstruction.h"

class Instruction_jci : public Instruction_longInstruction {
friend class InstructionRegistry;
public:
    virtual ~Instruction_jci();
    virtual void execute() const;
private:
    Instruction_jci();
};


#endif
