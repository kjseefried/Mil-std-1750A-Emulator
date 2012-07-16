
#ifndef INSTRUCTION_DSLC
#define INSTRUCTION_DSLC

#include "Instruction_register2Register.h"

class Instruction_dslc : public Instruction_register2Register {
friend class InstructionRegistry;
public:
    virtual ~Instruction_dslc();
    virtual void execute() const;
private:
    Instruction_dslc();
};


#endif
