
#ifndef INSTRUCTION_MSR
#define INSTRUCTION_MSR

#include "Instruction_register2Register.h"

class Instruction_msr : public Instruction_register2Register {
friend class InstructionRegistry;
public:
    virtual ~Instruction_msr();
    virtual void execute() const;
private:
    Instruction_msr();
};


#endif
