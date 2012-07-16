
#ifndef INSTRUCTION_EFM
#define INSTRUCTION_EFM

#include "Instruction_longInstruction.h"

class Instruction_efm : public Instruction_longInstruction {
friend class InstructionRegistry;
public:
    virtual ~Instruction_efm();
    virtual void execute() const;
private:
    Instruction_efm();
};


#endif
