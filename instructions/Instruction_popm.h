
#ifndef INSTRUCTION_POPM
#define INSTRUCTION_POPM 

#include "Instruction_register2Register.h"

class Instruction_popm : public Instruction_register2Register {
friend class InstructionRegistry;
public:
    virtual ~Instruction_popm();
    virtual void execute() const;
private:
    Instruction_popm();
};


#endif
