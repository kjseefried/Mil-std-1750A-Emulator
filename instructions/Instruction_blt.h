
#ifndef INSTRUCTION_BLT
#define INSTRUCTION_BLT

#include "Instruction_counterRelative.h"

class Instruction_blt : public Instruction_counterRelative {
friend class InstructionRegistry;
public:
    virtual ~Instruction_blt();
    virtual void execute() const;
private:
    Instruction_blt();
};


#endif
