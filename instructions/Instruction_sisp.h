
#ifndef INSTRUCTION_SISP
#define INSTRUCTION_SISP

#include "Instruction_immediateShortPositive.h"

class Instruction_sisp : public Instruction_immediateShortPositive {
friend class InstructionRegistry;
public:
    virtual ~Instruction_sisp();
    virtual void execute() const;
private:
    Instruction_sisp();
};


#endif
