
#ifndef INSTRUCTION_NOP
#define INSTRUCTION_NOP 

#include "Instruction_register2Register.h"

class Instruction_nop : public Instruction_register2Register {
friend class InstructionRegistry;
public:
    virtual ~Instruction_nop();
    virtual void execute() const;
private:
    Instruction_nop();
};


#endif
