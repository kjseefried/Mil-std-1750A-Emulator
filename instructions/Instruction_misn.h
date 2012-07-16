
#ifndef INSTRUCTION_MISN
#define INSTRUCTION_MISN

#include "Instruction_immediateShortNegative.h"

class Instruction_misn : public Instruction_immediateShortNegative {
friend class InstructionRegistry;
public:
    virtual ~Instruction_misn();
    virtual void execute() const;
private:
    Instruction_misn();
};


#endif
