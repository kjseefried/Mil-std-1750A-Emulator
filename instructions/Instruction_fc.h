
#ifndef INSTRUCTION_FC
#define INSTRUCTION_FC

#include "Instruction_longInstruction.h"

class Instruction_fc : public Instruction_longInstruction {
friend class InstructionRegistry;
public:
    virtual ~Instruction_fc();
    virtual void execute() const;
private:
    Instruction_fc();
};


#endif
