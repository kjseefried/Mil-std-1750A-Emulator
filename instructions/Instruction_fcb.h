
#ifndef INSTRUCTION_FCB
#define INSTRUCTION_FCB

#include "Instruction_baseRelative.h"

class Instruction_fcb : public Instruction_baseRelative {
friend class InstructionRegistry;
public:
    virtual ~Instruction_fcb();
    virtual void execute() const;
private:
    Instruction_fcb();
};


#endif
