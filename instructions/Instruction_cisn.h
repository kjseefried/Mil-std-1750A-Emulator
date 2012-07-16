
#ifndef INSTRUCTION_CISN
#define INSTRUCTION_CISN

#include "Instruction_immediateShortNegative.h"

class Instruction_cisn : public Instruction_immediateShortNegative {
friend class InstructionRegistry;
public:
    virtual ~Instruction_cisn();
    virtual void execute() const;
private:
    Instruction_cisn();
};


#endif
