
#ifndef INSTRUCTION_SLBI
#define INSTRUCTION_SLBI

#include "Instruction_longInstructionIndirect.h"

class Instruction_slbi : public Instruction_longInstructionIndirect {
friend class InstructionRegistry;
public:
    virtual ~Instruction_slbi();
    virtual void execute() const;
private:
    Instruction_slbi();
};


#endif
