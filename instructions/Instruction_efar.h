
#ifndef INSTRUCTION_EFAR
#define INSTRUCTION_EFAR

#include "Instruction_register2Register.h"

class Instruction_efar : public Instruction_register2Register {
friend class InstructionRegistry;
public:
    virtual ~Instruction_efar();
    virtual void execute() const;
private:
    Instruction_efar();
};


#endif
