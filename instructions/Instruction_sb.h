
#ifndef INSTRUCTION_SB
#define INSTRUCTION_SB

#include "Instruction_longInstruction.h"

class Instruction_sb : public Instruction_longInstruction {
friend class InstructionRegistry;
public:
    virtual ~Instruction_sb();
    virtual void execute() const;
private:
    Instruction_sb();
};


#endif
