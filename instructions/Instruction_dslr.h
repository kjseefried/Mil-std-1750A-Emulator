
#ifndef INSTRUCTION_DSLR
#define INSTRUCTION_DSLR

#include "Instruction_register2Register.h"

class Instruction_dslr : public Instruction_register2Register {
friend class InstructionRegistry;
public:
    virtual ~Instruction_dslr();
    virtual void execute() const;
private:
    Instruction_dslr();
};


#endif
