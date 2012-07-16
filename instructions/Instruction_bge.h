
#ifndef INSTRUCTION_BGE
#define INSTRUCTION_BGE

#include "Instruction_counterRelative.h"

class Instruction_bge : public Instruction_counterRelative {
friend class InstructionRegistry;
public:
    virtual ~Instruction_bge();
    virtual void execute() const;
private:
    Instruction_bge();
};


#endif
