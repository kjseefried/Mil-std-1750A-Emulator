
#ifndef INSTRUCTION_FIX
#define INSTRUCTION_FIX

#include "Instruction_register2Register.h"

class Instruction_fix : public Instruction_register2Register {
friend class InstructionRegistry;
public:
    virtual ~Instruction_fix();
    virtual void execute() const;
private:
    Instruction_fix();
};


#endif
