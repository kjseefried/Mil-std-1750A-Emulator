
#ifndef INSTRUCTION_DSRL
#define INSTRUCTION_DSRL

#include "Instruction_register2Register.h"

class Instruction_dsrl : public Instruction_register2Register {
friend class InstructionRegistry;
public:
    virtual ~Instruction_dsrl();
    virtual void execute() const;
private:
    Instruction_dsrl();
};


#endif
