
#ifndef INSTRUCTION_EFCR
#define INSTRUCTION_EFCR

#include "Instruction_register2Register.h"

class Instruction_efcr : public Instruction_register2Register {
friend class InstructionRegistry;
public:
    virtual ~Instruction_efcr();
    virtual void execute() const;
private:
    Instruction_efcr();
};


#endif
