
#ifndef INSTRUCTION_FMR
#define INSTRUCTION_FMR

#include "Instruction_register2Register.h"

class Instruction_fmr : public Instruction_register2Register {
friend class InstructionRegistry;
public:
    virtual ~Instruction_fmr();
    virtual void execute() const;
private:
    Instruction_fmr();
};


#endif
