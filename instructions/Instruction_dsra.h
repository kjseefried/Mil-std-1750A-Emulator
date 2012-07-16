
#ifndef INSTRUCTION_DSRA
#define INSTRUCTION_DSRA

#include "Instruction_register2Register.h"

class Instruction_dsra : public Instruction_register2Register {
friend class InstructionRegistry;
public:
    virtual ~Instruction_dsra();
    virtual void execute() const;
private:
    Instruction_dsra();
};


#endif
