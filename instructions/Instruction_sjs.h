
#ifndef INSTRUCTION_SJS
#define INSTRUCTION_SJS

#include "Instruction_longInstructionData.h"

class Instruction_sjs : public Instruction_longInstructionData {
friend class InstructionRegistry;
public:
    virtual ~Instruction_sjs();
    virtual void execute() const;
private:
    Instruction_sjs();
};


#endif
