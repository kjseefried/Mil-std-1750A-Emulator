
#ifndef INSTRUCTION_LST
#define INSTRUCTION_LST

#include "Instruction_longInstruction.h"

class Instruction_lst : public Instruction_longInstruction {
friend class InstructionRegistry;
public:
    virtual ~Instruction_lst();
    virtual void execute() const;
private:
    Instruction_lst();
};


#endif
