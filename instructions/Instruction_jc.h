
#ifndef INSTRUCTION_JC
#define INSTRUCTION_JC

#include "Instruction_longInstructionData.h"

class Instruction_jc : public Instruction_longInstructionData {
friend class InstructionRegistry;
public:
    virtual ~Instruction_jc();
    virtual void execute() const;
private:
    Instruction_jc();
};


#endif
