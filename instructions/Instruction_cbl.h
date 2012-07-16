
#ifndef INSTRUCTION_CBL
#define INSTRUCTION_CBL

#include "Instruction_longInstruction.h"

class Instruction_cbl : public Instruction_longInstruction {
friend class InstructionRegistry;
public:
    virtual ~Instruction_cbl();
    virtual void execute() const;
private:
    Instruction_cbl();
};


#endif
