
#ifndef INSTRUCTION_TBR
#define INSTRUCTION_TBR

#include "Instruction_register2Register.h"

class Instruction_tbr : public Instruction_register2Register {
friend class InstructionRegistry;
public:
    virtual ~Instruction_tbr();
    virtual void execute() const;
private:
    Instruction_tbr();
};


#endif
