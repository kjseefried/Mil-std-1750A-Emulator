
#ifndef INSTRUCTION_SBI
#define INSTRUCTION_SBI

#include "Instruction_longInstructionIndirect.h"

class Instruction_sbi : public Instruction_longInstructionIndirect {
friend class InstructionRegistry;
public:
    virtual ~Instruction_sbi();
    virtual void execute() const;
private:
    Instruction_sbi();
};


#endif
