
#ifndef INSTRUCTION_N
#define INSTRUCTION_N

#include "Instruction_longInstruction.h"

class Instruction_n : public Instruction_longInstruction {
friend class InstructionRegistry;
public:
    virtual ~Instruction_n();
    virtual void execute() const;
private:
    Instruction_n();
};


#endif
