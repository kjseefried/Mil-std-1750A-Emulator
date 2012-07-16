
#ifndef INSTRUCTION_DC
#define INSTRUCTION_DC

#include "Instruction_longInstruction.h"

class Instruction_dc : public Instruction_longInstruction {
friend class InstructionRegistry;
public:
    virtual ~Instruction_dc();
    virtual void execute() const;
private:
    Instruction_dc();
};


#endif
