
#ifndef INSTRUCTION_CB
#define INSTRUCTION_CB

#include "Instruction_baseRelative.h"

class Instruction_cb : public Instruction_baseRelative {
friend class InstructionRegistry;
public:
    virtual ~Instruction_cb();
    virtual void execute() const;
private:
    Instruction_cb();
};


#endif
