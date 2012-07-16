
#ifndef INSTRUCTION_DABS
#define INSTRUCTION_DABS

#include "Instruction_register2Register.h"

class Instruction_dabs : public Instruction_register2Register {
friend class InstructionRegistry;
public:
    virtual ~Instruction_dabs();
    virtual void execute() const;
private:
    Instruction_dabs();
};


#endif
