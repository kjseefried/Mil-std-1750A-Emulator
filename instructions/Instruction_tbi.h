
#ifndef INSTRUCTION_TBI
#define INSTRUCTION_TBI

#include "Instruction_longInstructionIndirect.h"

class Instruction_tbi : public Instruction_longInstructionIndirect {
friend class InstructionRegistry;
public:
    virtual ~Instruction_tbi();
    virtual void execute() const;
private:
    Instruction_tbi();
};


#endif
