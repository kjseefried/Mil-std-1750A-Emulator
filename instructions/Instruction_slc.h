
#ifndef INSTRUCTION_SLC
#define INSTRUCTION_SLC

#include "Instruction_register2Register.h"

class Instruction_slc : public Instruction_register2Register {
friend class InstructionRegistry;
public:
    virtual ~Instruction_slc();
    virtual void execute() const;
private:
    Instruction_slc();
};


#endif
