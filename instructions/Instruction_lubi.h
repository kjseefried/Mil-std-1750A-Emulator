
#ifndef INSTRUCTION_LUBI
#define INSTRUCTION_LUBI

#include "Instruction_longInstructionIndirect.h"

class Instruction_lubi : public Instruction_longInstructionIndirect {
friend class InstructionRegistry;
public:
    virtual ~Instruction_lubi();
    virtual void execute() const;
private:
    Instruction_lubi();
};


#endif
