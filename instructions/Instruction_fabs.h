
#ifndef INSTRUCTION_FABS
#define INSTRUCTION_FABS

#include "Instruction_register2Register.h"

class Instruction_fabs : public Instruction_register2Register {
friend class InstructionRegistry;
public:
    virtual ~Instruction_fabs();
    virtual void execute() const;
private:
    Instruction_fabs();
};


#endif
