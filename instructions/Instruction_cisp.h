
#ifndef INSTRUCTION_CISP
#define INSTRUCTION_CISP

#include "Instruction_immediateShortPositive.h"

class Instruction_cisp : public Instruction_immediateShortPositive {
friend class InstructionRegistry;
public:
    virtual ~Instruction_cisp();
    virtual void execute() const;
private:
    Instruction_cisp();
};


#endif
