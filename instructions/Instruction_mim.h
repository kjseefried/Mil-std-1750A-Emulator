
#ifndef INSTRUCTION_MIM
#define INSTRUCTION_MIM

#include "Instruction_immediate.h"

class Instruction_mim : public Instruction_immediate {
friend class InstructionRegistry;
public:
    virtual ~Instruction_mim();
    virtual void execute() const;
private:
    Instruction_mim();
};


#endif
