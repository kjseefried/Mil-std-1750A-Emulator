
#ifndef INSTRUCTION_L
#define INSTRUCTION_L

#include "Instruction_longInstruction.h"

class Instruction_l : public Instruction_longInstruction {
friend class InstructionRegistry;
public:
    virtual ~Instruction_l();
    virtual void execute() const;
private:
    Instruction_l();
};


#endif
