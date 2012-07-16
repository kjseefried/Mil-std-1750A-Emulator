
#ifndef INSTRUCTION_PSHM
#define INSTRUCTION_PSHM

#include "Instruction_register2Register.h"

class Instruction_pshm : public Instruction_register2Register {
friend class InstructionRegistry;
public:
    virtual ~Instruction_pshm();
    virtual void execute() const;
private:
    Instruction_pshm();
};


#endif
