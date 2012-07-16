
#ifndef INSTRUCTION_FNEG
#define INSTRUCTION_FNEG

#include "Instruction_register2Register.h"

class Instruction_fneg : public Instruction_register2Register {
friend class InstructionRegistry;
public:
    virtual ~Instruction_fneg();
    virtual void execute() const;
private:
    Instruction_fneg();
};


#endif
