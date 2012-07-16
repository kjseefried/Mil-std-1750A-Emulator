
#ifndef INSTRUCTION_M
#define INSTRUCTION_M

#include "Instruction_longInstruction.h"

class Instruction_m : public Instruction_longInstruction {
friend class InstructionRegistry;
public:
    virtual ~Instruction_m();
    virtual void execute() const;
private:
    Instruction_m();
};


#endif
