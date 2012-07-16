
#ifndef INSTRUCTION_LISN
#define INSTRUCTION_LISN

#include "Instruction_immediateShortNegative.h"

class Instruction_lisn : public Instruction_immediateShortNegative {
friend class InstructionRegistry;
public:
    virtual ~Instruction_lisn();
    virtual void execute() const;
private:
    Instruction_lisn();
};


#endif
