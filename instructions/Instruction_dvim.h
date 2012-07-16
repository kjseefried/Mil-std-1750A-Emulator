
#ifndef INSTRUCTION_DVIM
#define INSTRUCTION_DVIM

#include "Instruction_immediate.h"

class Instruction_dvim : public Instruction_immediate {
friend class InstructionRegistry;
public:
    virtual ~Instruction_dvim();
    virtual void execute() const;
private:
    Instruction_dvim();
};


#endif
