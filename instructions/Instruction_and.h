
#ifndef INSTRUCTION_AND
#define INSTRUCTION_AND

#include "Instruction_longInstruction.h"

class Instruction_and : public Instruction_longInstruction {
friend class InstructionRegistry;
public:
    virtual ~Instruction_and();
    virtual void execute() const;
private:
    Instruction_and();
};


#endif
