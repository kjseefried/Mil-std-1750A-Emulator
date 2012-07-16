
#ifndef INSTRUCTION_DST
#define INSTRUCTION_DST

#include "Instruction_longInstruction.h"

class Instruction_dst : public Instruction_longInstruction {
friend class InstructionRegistry;
public:
    virtual ~Instruction_dst();
    virtual void execute() const;
private:
    Instruction_dst();
};


#endif
