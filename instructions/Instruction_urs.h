
#ifndef INSTRUCTION_URS
#define INSTRUCTION_URS

#include "Instruction_register2Register.h"

class Instruction_urs : public Instruction_register2Register {
friend class InstructionRegistry;
public:
    virtual ~Instruction_urs();
    virtual void execute() const;
private:
    Instruction_urs();
};


#endif
