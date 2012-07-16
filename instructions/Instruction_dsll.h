
#ifndef INSTRUCTION_DSLL
#define INSTRUCTION_DSLL

#include "Instruction_register2Register.h"

class Instruction_dsll : public Instruction_register2Register {
friend class InstructionRegistry;
public:
    virtual ~Instruction_dsll();
    virtual void execute() const;
private:
    Instruction_dsll();
};


#endif
