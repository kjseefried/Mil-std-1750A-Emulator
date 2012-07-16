
#ifndef INSTRUCTION_STM
#define INSTRUCTION_STM

#include "Instruction_longInstruction.h"

class Instruction_stm : public Instruction_longInstruction {
friend class InstructionRegistry;
public:
    virtual ~Instruction_stm();
    virtual void execute() const;
private:
    Instruction_stm();
};


#endif
