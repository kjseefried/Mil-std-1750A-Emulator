
#ifndef INSTRUCTION_ANDM
#define INSTRUCTION_ANDM

#include "Instruction_immediate.h"

class Instruction_andm : public Instruction_immediate {
friend class InstructionRegistry;
public:
    virtual ~Instruction_andm();
    virtual void execute() const;
private:
    Instruction_andm();
};


#endif
