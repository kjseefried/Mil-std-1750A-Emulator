
#ifndef INSTRUCTION_DSTX
#define INSTRUCTION_DSTX

#include "Instruction_baseRelativeIndexed.h"

class Instruction_dstx : public Instruction_baseRelativeIndexed {
friend class InstructionRegistry;
public:
    virtual ~Instruction_dstx();
    virtual void execute() const;
private:
    Instruction_dstx();
};


#endif
