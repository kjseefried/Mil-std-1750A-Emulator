
#ifndef INSTRUCTION_SOJ
#define INSTRUCTION_SOJ

#include "Instruction_longInstructionData.h"

class Instruction_soj : public Instruction_longInstructionData {
friend class InstructionRegistry;
public:
    virtual ~Instruction_soj();
    virtual void execute() const;
private:
    Instruction_soj();
};


#endif
