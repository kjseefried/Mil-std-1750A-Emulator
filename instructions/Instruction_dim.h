
#ifndef INSTRUCTION_DIM
#define INSTRUCTION_DIM

#include "Instruction_immediate.h"

class Instruction_dim : public Instruction_immediate {
friend class InstructionRegistry;
public:
    virtual ~Instruction_dim();
    virtual void execute() const;
private:
    Instruction_dim();
};


#endif
