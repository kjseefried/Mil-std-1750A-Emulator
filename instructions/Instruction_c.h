
#ifndef INSTRUCTION_C
#define INSTRUCTION_C

#include "Instruction_longInstruction.h"

class Instruction_c : public Instruction_longInstruction {
friend class InstructionRegistry;
public:
    virtual ~Instruction_c();
    virtual void execute() const;
private:
    Instruction_c();
};


#endif
