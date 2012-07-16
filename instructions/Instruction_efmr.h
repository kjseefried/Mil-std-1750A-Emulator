
#ifndef INSTRUCTION_EFMR
#define INSTRUCTION_EFMR

#include "Instruction_register2Register.h"

class Instruction_efmr : public Instruction_register2Register {
friend class InstructionRegistry;
public:
    virtual ~Instruction_efmr();
    virtual void execute() const;
private:
    Instruction_efmr();
};


#endif
