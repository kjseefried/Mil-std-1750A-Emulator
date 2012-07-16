
#ifndef INSTRUCTION_DL
#define INSTRUCTION_DL

#include "Instruction_longInstruction.h"

class Instruction_dl : public Instruction_longInstruction {
friend class InstructionRegistry;
public:
    virtual ~Instruction_dl();
    virtual void execute() const;
private:
    Instruction_dl();
};


#endif
