
#ifndef INSTRUCTION_EFA
#define INSTRUCTION_EFA

#include "Instruction_longInstruction.h"

class Instruction_efa : public Instruction_longInstruction {
friend class InstructionRegistry;
public:
    virtual ~Instruction_efa();
    virtual void execute() const;
private:
    Instruction_efa();
};


#endif
