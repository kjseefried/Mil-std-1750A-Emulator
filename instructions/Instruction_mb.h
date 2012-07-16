
#ifndef INSTRUCTION_MB
#define INSTRUCTION_MB

#include "Instruction_baseRelative.h"

class Instruction_mb : public Instruction_baseRelative {
friend class InstructionRegistry;
public:
    virtual ~Instruction_mb();
    virtual void execute() const;
private:
    Instruction_mb();
};


#endif
