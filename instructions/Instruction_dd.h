
#ifndef INSTRUCTION_DD
#define INSTRUCTION_DD

#include "Instruction_longInstruction.h"

class Instruction_dd : public Instruction_longInstruction {
friend class InstructionRegistry;
public:
    virtual ~Instruction_dd();
    virtual void execute() const;
private:
    Instruction_dd();
};


#endif
