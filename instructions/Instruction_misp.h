
#ifndef INSTRUCTION_MISP
#define INSTRUCTION_MISP

#include "Instruction_immediateShortPositive.h"

class Instruction_misp : public Instruction_immediateShortPositive {
friend class InstructionRegistry;
public:
    virtual ~Instruction_misp();
    virtual void execute() const;
private:
    Instruction_misp();
};


#endif
