
#ifndef INSTRUCTION_EFD
#define INSTRUCTION_EFD

#include "Instruction_longInstruction.h"

class Instruction_efd : public Instruction_longInstruction {
friend class InstructionRegistry;
public:
    virtual ~Instruction_efd();
    virtual void execute() const;
private:
    Instruction_efd();
};


#endif
