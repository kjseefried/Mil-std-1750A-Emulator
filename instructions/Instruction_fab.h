
#ifndef INSTRUCTION_FAB
#define INSTRUCTION_FAB

#include "Instruction_baseRelative.h"

class Instruction_fab : public Instruction_baseRelative {
friend class InstructionRegistry;
public:
    virtual ~Instruction_fab();
    virtual void execute() const;
private:
    Instruction_fab();
};


#endif
