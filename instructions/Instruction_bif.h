
#ifndef INSTRUCTION_BIF
#define INSTRUCTION_BIF

#include "Instruction_special.h"

class Instruction_bif : public Instruction_special {
friend class InstructionRegistry;
public:
    virtual ~Instruction_bif();
    virtual void execute() const;
private:
    Instruction_bif();
};


#endif
