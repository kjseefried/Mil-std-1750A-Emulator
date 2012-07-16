
#ifndef INSTRUCTION_ABS
#define INSTRUCTION_ABS

#include "Instruction_register2Register.h"

class Instruction_abs : public Instruction_register2Register {
friend class InstructionRegistry;
public:
    virtual ~Instruction_abs();
    virtual void execute() const;
private:
    Instruction_abs();
};


#endif
