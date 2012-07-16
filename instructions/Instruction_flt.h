
#ifndef INSTRUCTION_FLT
#define INSTRUCTION_FLT

#include "Instruction_register2Register.h"

class Instruction_flt : public Instruction_register2Register {
friend class InstructionRegistry;
public:
    virtual ~Instruction_flt();
    virtual void execute() const;
private:
    Instruction_flt();
};


#endif
