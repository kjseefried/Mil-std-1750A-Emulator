
#ifndef INSTRUCTION_BGT
#define INSTRUCTION_BGT

#include "Instruction_counterRelative.h"

class Instruction_bgt : public Instruction_counterRelative {
friend class InstructionRegistry;
public:
    virtual ~Instruction_bgt();
    virtual void execute() const;
private:
    Instruction_bgt();
};


#endif
