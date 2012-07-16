
#ifndef INSTRUCTION_AR
#define INSTRUCTION_AR

#include "Instruction_register2Register.h"

class Instruction_ar : public Instruction_register2Register {
friend class InstructionRegistry;
public:
    virtual ~Instruction_ar();
    virtual void execute() const;
private:
    Instruction_ar();
};


#endif
