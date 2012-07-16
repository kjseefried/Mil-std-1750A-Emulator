
#ifndef INSTRUCTION_DISN
#define INSTRUCTION_DISN

#include "Instruction_immediateShortNegative.h"

class Instruction_disn : public Instruction_immediateShortNegative {
friend class InstructionRegistry;
public:
    virtual ~Instruction_disn();
    virtual void execute() const;
private:
    Instruction_disn();
};


#endif
