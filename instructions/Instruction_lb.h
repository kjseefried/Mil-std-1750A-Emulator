
#ifndef INSTRUCTION_LB
#define INSTRUCTION_LB

#include "Instruction_baseRelative.h"

class Instruction_lb : public Instruction_baseRelative {
friend class InstructionRegistry;
public:
    virtual ~Instruction_lb();
    virtual void execute() const;
private:
    Instruction_lb();
};


#endif
