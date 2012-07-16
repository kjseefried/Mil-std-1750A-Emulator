
#ifndef INSTRUCTION_STCI
#define INSTRUCTION_STCI

#include "Instruction_longInstructionIndirect.h"

class Instruction_stci : public Instruction_longInstructionIndirect {
friend class InstructionRegistry;
public:
    virtual ~Instruction_stci();
    virtual void execute() const;
private:
    Instruction_stci();
};


#endif
