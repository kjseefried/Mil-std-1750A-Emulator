
#ifndef INSTRUCTION_EFC
#define INSTRUCTION_EFC

#include "Instruction_longInstruction.h"

class Instruction_efc : public Instruction_longInstruction {
friend class InstructionRegistry;
public:
    virtual ~Instruction_efc();
    virtual void execute() const;
private:
    Instruction_efc();
};


#endif
