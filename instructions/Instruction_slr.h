
#ifndef INSTRUCTION_SLR
#define INSTRUCTION_SLR

#include "Instruction_register2Register.h"

class Instruction_slr : public Instruction_register2Register {
friend class InstructionRegistry;
public:
    virtual ~Instruction_slr();
    virtual void execute() const;
private:
    Instruction_slr();
};


#endif
