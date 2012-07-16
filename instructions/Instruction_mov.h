
#ifndef INSTRUCTION_MOV
#define INSTRUCTION_MOV

#include "Instruction_register2Register.h"

class Instruction_mov : public Instruction_register2Register {
friend class InstructionRegistry;
public:
    virtual ~Instruction_mov();
    virtual void execute() const;
private:
    Instruction_mov();
};


#endif
