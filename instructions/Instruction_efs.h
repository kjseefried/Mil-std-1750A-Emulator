
#ifndef INSTRUCTION_EFS
#define INSTRUCTION_EFS

#include "Instruction_longInstruction.h"

class Instruction_efs : public Instruction_longInstruction {
friend class InstructionRegistry;
public:
    virtual ~Instruction_efs();
    virtual void execute() const;
private:
    Instruction_efs();
};


#endif
