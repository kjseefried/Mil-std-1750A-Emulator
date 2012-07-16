
#ifndef INSTRUCTION_ORB
#define INSTRUCTION_ORB

#include "Instruction_baseRelative.h"

class Instruction_orb : public Instruction_baseRelative {
friend class InstructionRegistry;
public:
    virtual ~Instruction_orb();
    virtual void execute() const;
private:
    Instruction_orb();
};


#endif
