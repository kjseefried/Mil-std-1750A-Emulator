
#ifndef INSTRUCTION_RBI
#define INSTRUCTION_RBI

#include "Instruction_longInstructionIndirect.h"

class Instruction_rbi : public Instruction_longInstructionIndirect {
friend class InstructionRegistry;
public:
    virtual ~Instruction_rbi();
    virtual void execute() const;
private:
    Instruction_rbi();
};


#endif
