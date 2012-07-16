
#ifndef INSTRUCTION_LSTI
#define INSTRUCTION_LSTI

#include "Instruction_longInstructionIndirect.h"

class Instruction_lsti : public Instruction_longInstructionIndirect {
friend class InstructionRegistry;
public:
    virtual ~Instruction_lsti();
    virtual void execute() const;
private:
    Instruction_lsti();
};


#endif
