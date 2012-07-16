
#ifndef INSTRUCTION_DLB
#define INSTRUCTION_DLB

#include "Instruction_baseRelative.h"

class Instruction_dlb : public Instruction_baseRelative {
friend class InstructionRegistry;
public:
    virtual ~Instruction_dlb();
    virtual void execute() const;
private:
    Instruction_dlb();
};


#endif
