
#ifndef INSTRUCTION_DECM
#define INSTRUCTION_DECM

#include "Instruction_longInstruction.h"

class Instruction_decm : public Instruction_longInstruction {
friend class InstructionRegistry;
public:
    virtual ~Instruction_decm();
    virtual void execute() const;
private:
    Instruction_decm();
};


#endif
