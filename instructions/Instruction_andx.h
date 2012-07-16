
#ifndef INSTRUCTION_ANDX
#define INSTRUCTION_ANDX

#include "Instruction_baseRelativeIndexed.h"

class Instruction_andx : public Instruction_baseRelativeIndexed {
friend class InstructionRegistry;
public:
    virtual ~Instruction_andx();
    virtual void execute() const;
private:
    Instruction_andx();
};


#endif
