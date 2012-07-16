
#ifndef INSTRUCTION_FSB
#define INSTRUCTION_FSB

#include "Instruction_baseRelative.h"

class Instruction_fsb : public Instruction_baseRelative {
friend class InstructionRegistry;
public:
    virtual ~Instruction_fsb();
    virtual void execute() const;
private:
    Instruction_fsb();
};


#endif
