
#ifndef INSTRUCTION_BR
#define INSTRUCTION_BR

#include "Instruction_counterRelative.h"

class Instruction_br : public Instruction_counterRelative {
friend class InstructionRegistry;
public:
    virtual ~Instruction_br();
    virtual void execute() const;
private:
    Instruction_br();
};


#endif
