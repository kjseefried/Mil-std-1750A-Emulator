
#ifndef INSTRUCTION_S
#define INSTRUCTION_S

#include "Instruction_longInstruction.h"

class Instruction_s : public Instruction_longInstruction {
friend class InstructionRegistry;
public:
    virtual ~Instruction_s();
    virtual void execute() const;
private:
    Instruction_s();
};


#endif
