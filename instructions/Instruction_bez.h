
#ifndef INSTRUCTION_BEZ
#define INSTRUCTION_BEZ

#include "Instruction_counterRelative.h"

class Instruction_bez : public Instruction_counterRelative {
friend class InstructionRegistry;
public:
    virtual ~Instruction_bez();
    virtual void execute() const;
private:
    Instruction_bez();
};


#endif
