
#ifndef INSTRUCTION_SBR
#define INSTRUCTION_SBR

#include "Instruction_register2Register.h"

class Instruction_sbr : public Instruction_register2Register {
friend class InstructionRegistry;
public:
    virtual ~Instruction_sbr();
    virtual void execute() const;
private:
    Instruction_sbr();
};


#endif
