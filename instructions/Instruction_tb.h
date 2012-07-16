
#ifndef INSTRUCTION_TB
#define INSTRUCTION_TB

#include "Instruction_longInstruction.h"

class Instruction_tb : public Instruction_longInstruction {
friend class InstructionRegistry;
public:
    virtual ~Instruction_tb();
    virtual void execute() const;
private:
    Instruction_tb();
};


#endif
