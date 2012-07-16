
#ifndef INSTRUCTION_AIM
#define INSTRUCTION_AIM

#include "Instruction_immediate.h"

class Instruction_aim : public Instruction_immediate {
friend class InstructionRegistry;
public:
    virtual ~Instruction_aim();
    virtual void execute() const;
private:
    Instruction_aim();
};


#endif
