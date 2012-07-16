
#ifndef INSTRUCTION_DSTB
#define INSTRUCTION_DSTB

#include "Instruction_baseRelative.h"

class Instruction_dstb : public Instruction_baseRelative {
friend class InstructionRegistry;
public:
    virtual ~Instruction_dstb();
    virtual void execute() const;
private:
    Instruction_dstb();
};


#endif
