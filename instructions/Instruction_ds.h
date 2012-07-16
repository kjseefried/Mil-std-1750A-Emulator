
#ifndef INSTRUCTION_DS
#define INSTRUCTION_DS

#include "Instruction_longInstruction.h"

class Instruction_ds : public Instruction_longInstruction {
friend class InstructionRegistry;
public:
    virtual ~Instruction_ds();
    virtual void execute() const;
private:
    Instruction_ds();
};


#endif
