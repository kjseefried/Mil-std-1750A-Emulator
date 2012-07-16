
#ifndef INSTRUCTION_DR
#define INSTRUCTION_DR

#include "Instruction_register2Register.h"

class Instruction_dr : public Instruction_register2Register {
friend class InstructionRegistry;
public:
    virtual ~Instruction_dr();
    virtual void execute() const;
private:
    Instruction_dr();
};


#endif
