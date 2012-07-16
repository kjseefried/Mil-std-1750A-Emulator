
#ifndef INSTRUCTION_MR
#define INSTRUCTION_MR

#include "Instruction_register2Register.h"

class Instruction_mr : public Instruction_register2Register {
friend class InstructionRegistry;
public:
    virtual ~Instruction_mr();
    virtual void execute() const;
private:
    Instruction_mr();
};


#endif
