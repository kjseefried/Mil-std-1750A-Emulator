
#ifndef INSTRUCTION_BNZ
#define INSTRUCTION_BNZ

#include "Instruction_counterRelative.h"

class Instruction_bnz : public Instruction_counterRelative {
friend class InstructionRegistry;
public:
    virtual ~Instruction_bnz();
    virtual void execute() const;
private:
    Instruction_bnz();
};


#endif
