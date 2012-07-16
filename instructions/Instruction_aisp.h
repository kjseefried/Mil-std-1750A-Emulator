
#ifndef INSTRUCTION_AISP
#define INSTRUCTION_AISP

#include "Instruction_immediateShortPositive.h"

class Instruction_aisp : public Instruction_immediateShortPositive {
friend class InstructionRegistry;
public:
    virtual ~Instruction_aisp();
    virtual void execute() const;
private:
    Instruction_aisp();
};


#endif
