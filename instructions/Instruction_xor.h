
#ifndef INSTRUCTION_XOR
#define INSTRUCTION_XOR

#include "Instruction_longInstruction.h"

class Instruction_xor : public Instruction_longInstruction {
friend class InstructionRegistry;
public:
    virtual ~Instruction_xor();
    virtual void execute() const;
private:
    Instruction_xor();
};


#endif
