
#ifndef INSTRUCTION_FDBX
#define INSTRUCTION_FDBX

#include "Instruction_baseRelativeIndexed.h"

class Instruction_fdbx : public Instruction_baseRelativeIndexed {
friend class InstructionRegistry;
public:
    virtual ~Instruction_fdbx();
    virtual void execute() const;
private:
    Instruction_fdbx();
};


#endif
