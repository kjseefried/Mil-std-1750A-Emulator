
#ifndef INSTRUCTION_SUBI
#define INSTRUCTION_SUBI

#include "Instruction_longInstructionIndirect.h"

class Instruction_subi : public Instruction_longInstructionIndirect {
friend class InstructionRegistry;
public:
    virtual ~Instruction_subi();
    virtual void execute() const;
private:
    Instruction_subi();
};


#endif
