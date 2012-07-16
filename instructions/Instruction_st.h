
#ifndef INSTRUCTION_ST
#define INSTRUCTION_ST

#include "Instruction_longInstruction.h"

class Instruction_st : public Instruction_longInstruction {
friend class InstructionRegistry;
public:
    virtual ~Instruction_st();
    virtual void execute() const;
private:
    Instruction_st();
};


#endif
