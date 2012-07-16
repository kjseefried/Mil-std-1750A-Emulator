
#ifndef INSTRUCTION_STUB
#define INSTRUCTION_STUB

#include "Instruction_longInstruction.h"

class Instruction_stub : public Instruction_longInstruction {
friend class InstructionRegistry;
public:
    virtual ~Instruction_stub();
    virtual void execute() const;
private:
    Instruction_stub();
};


#endif
