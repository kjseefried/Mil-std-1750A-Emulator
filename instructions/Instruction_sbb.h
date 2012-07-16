
#ifndef INSTRUCTION_SBB
#define INSTRUCTION_SBB

#include "Instruction_baseRelative.h"

class Instruction_sbb : public Instruction_baseRelative {
friend class InstructionRegistry;
public:
    virtual ~Instruction_sbb();
    virtual void execute() const;
private:
    Instruction_sbb();
};


#endif
