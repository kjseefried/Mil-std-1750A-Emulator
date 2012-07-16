
#ifndef INSTRUCTION_A
#define INSTRUCTION_A

#include "Instruction_longInstruction.h"

class Instruction_a : public Instruction_longInstruction {
friend class InstructionRegistry;
public:
    virtual ~Instruction_a();
    virtual void execute() const;
private:
    Instruction_a();
};


#endif
