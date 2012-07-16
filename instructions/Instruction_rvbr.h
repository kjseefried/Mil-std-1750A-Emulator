
#ifndef INSTRUCTION_RVBR
#define INSTRUCTION_RVBR

#include "Instruction_register2Register.h"

class Instruction_rvbr : public Instruction_register2Register {
friend class InstructionRegistry;
public:
    virtual ~Instruction_rvbr();
    virtual void execute() const;
private:
    Instruction_rvbr();
};


#endif
