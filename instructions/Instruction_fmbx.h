
#ifndef INSTRUCTION_FMBX
#define INSTRUCTION_FMBX

#include "Instruction_baseRelativeIndexed.h"

class Instruction_fmbx : public Instruction_baseRelativeIndexed {
friend class InstructionRegistry;
public:
    virtual ~Instruction_fmbx();
    virtual void execute() const;
private:
    Instruction_fmbx();
};


#endif
