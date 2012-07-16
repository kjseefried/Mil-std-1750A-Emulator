
#ifndef INSTRUCTION_MS
#define INSTRUCTION_MS

#include "Instruction_longInstruction.h"

class Instruction_ms : public Instruction_longInstruction {
friend class InstructionRegistry;
public:
    virtual ~Instruction_ms();
    virtual void execute() const;
private:
    Instruction_ms();
};


#endif
