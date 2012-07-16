
#ifndef INSTRUCTION_AB
#define INSTRUCTION_AB

#include "Instruction_baseRelative.h"

class Instruction_ab : public Instruction_baseRelative {
friend class InstructionRegistry;
public:
    virtual ~Instruction_ab();
    virtual void execute() const;
private:
    Instruction_ab();
};


#endif
