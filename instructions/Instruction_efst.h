
#ifndef INSTRUCTION_EFST
#define INSTRUCTION_EFST

#include "Instruction_longInstruction.h"

class Instruction_efst : public Instruction_longInstruction {
friend class InstructionRegistry;
public:
    virtual ~Instruction_efst();
    virtual void execute() const;
private:
    Instruction_efst();
};


#endif
