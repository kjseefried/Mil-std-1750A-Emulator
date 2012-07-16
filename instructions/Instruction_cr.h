
#ifndef INSTRUCTION_CR
#define INSTRUCTION_CR

#include "Instruction_register2Register.h"

class Instruction_cr : public Instruction_register2Register {
friend class InstructionRegistry;
public:
    virtual ~Instruction_cr();
    virtual void execute() const;
private:
    Instruction_cr();
};


#endif
