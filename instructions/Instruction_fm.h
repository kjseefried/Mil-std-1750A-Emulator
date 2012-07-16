
#ifndef INSTRUCTION_FM
#define INSTRUCTION_FM

#include "Instruction_longInstruction.h"

class Instruction_fm : public Instruction_longInstruction {
friend class InstructionRegistry;
public:
    virtual ~Instruction_fm();
    virtual void execute() const;
private:
    Instruction_fm();
};


#endif
