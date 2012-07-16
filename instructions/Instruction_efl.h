
#ifndef INSTRUCTION_EFL
#define INSTRUCTION_EFL

#include "Instruction_longInstruction.h"

class Instruction_efl : public Instruction_longInstruction {
friend class InstructionRegistry;
public:
    virtual ~Instruction_efl();
    virtual void execute() const;
private:
    Instruction_efl();
};


#endif
