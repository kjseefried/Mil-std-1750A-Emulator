
#ifndef INSTRUCTION_DNEG
#define INSTRUCTION_DNEG

#include "Instruction_register2Register.h"

class Instruction_dneg : public Instruction_register2Register {
friend class InstructionRegistry;
public:
    virtual ~Instruction_dneg();
    virtual void execute() const;
private:
    Instruction_dneg();
};


#endif
