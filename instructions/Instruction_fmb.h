
#ifndef INSTRUCTION_FMB
#define INSTRUCTION_FMB

#include "Instruction_baseRelative.h"

class Instruction_fmb : public Instruction_baseRelative {
friend class InstructionRegistry;
public:
    virtual ~Instruction_fmb();
    virtual void execute() const;
private:
    Instruction_fmb();
};


#endif
