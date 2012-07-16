
#ifndef INSTRUCTION_STC
#define INSTRUCTION_STC

#include "Instruction_longInstruction.h"

class Instruction_stc : public Instruction_longInstruction {
friend class InstructionRegistry;
public:
    virtual ~Instruction_stc();
    virtual void execute() const;
private:
    Instruction_stc();
};


#endif
