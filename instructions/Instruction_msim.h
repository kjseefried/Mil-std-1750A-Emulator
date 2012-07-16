
#ifndef INSTRUCTION_MSIM
#define INSTRUCTION_MSIM

#include "Instruction_immediate.h"

class Instruction_msim : public Instruction_immediate {
friend class InstructionRegistry;
public:
    virtual ~Instruction_msim();
    virtual void execute() const;
private:
    Instruction_msim();
};


#endif
