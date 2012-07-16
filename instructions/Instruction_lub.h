
#ifndef INSTRUCTION_LUB
#define INSTRUCTION_LUB

#include "Instruction_longInstruction.h"

class Instruction_lub : public Instruction_longInstruction {
friend class InstructionRegistry;
public:
    virtual ~Instruction_lub();
    virtual void execute() const;
private:
    Instruction_lub();
};


#endif
