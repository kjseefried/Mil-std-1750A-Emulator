
#ifndef INSTRUCTION_FSBX
#define INSTRUCTION_FSBX

#include "Instruction_baseRelativeIndexed.h"

class Instruction_fsbx : public Instruction_baseRelativeIndexed {
friend class InstructionRegistry;
public:
    virtual ~Instruction_fsbx();
    virtual void execute() const;
private:
    Instruction_fsbx();
};


#endif
