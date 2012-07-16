
#ifndef INSTRUCTION_DSTI
#define INSTRUCTION_DSTI

#include "Instruction_longInstructionIndirect.h"

class Instruction_dsti : public Instruction_longInstructionIndirect {
friend class InstructionRegistry;
public:
    virtual ~Instruction_dsti();
    virtual void execute() const;
private:
    Instruction_dsti();
};


#endif
