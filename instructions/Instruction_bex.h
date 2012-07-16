
#ifndef INSTRUCTION_BEX
#define INSTRUCTION_BEX

#include "Instruction_counterRelative.h"

class Instruction_bex : public Instruction_counterRelative {
friend class InstructionRegistry;
public:
    virtual ~Instruction_bex();
    virtual void execute() const;
private:
    Instruction_bex();
};


#endif
