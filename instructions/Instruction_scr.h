
#ifndef INSTRUCTION_SCR
#define INSTRUCTION_SCR

#include "Instruction_register2Register.h"

class Instruction_scr : public Instruction_register2Register {
friend class InstructionRegistry;
public:
    virtual ~Instruction_scr();
    virtual void execute() const;
private:
    Instruction_scr();
};


#endif
