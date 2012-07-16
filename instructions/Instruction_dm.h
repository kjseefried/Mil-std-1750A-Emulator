
#ifndef INSTRUCTION_DM
#define INSTRUCTION_DM

#include "Instruction_longInstruction.h"

class Instruction_dm : public Instruction_longInstruction {
friend class InstructionRegistry;
public:
    virtual ~Instruction_dm();
    virtual void execute() const;
private:
    Instruction_dm();
};


#endif
