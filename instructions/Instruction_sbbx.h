
#ifndef INSTRUCTION_SBBX
#define INSTRUCTION_SBBX

#include "Instruction_baseRelativeIndexed.h"

class Instruction_sbbx : public Instruction_baseRelativeIndexed {
friend class InstructionRegistry;
public:
    virtual ~Instruction_sbbx();
    virtual void execute() const;
private:
    Instruction_sbbx();
};


#endif
