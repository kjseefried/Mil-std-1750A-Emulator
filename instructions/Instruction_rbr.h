
#ifndef INSTRUCTION_RBR
#define INSTRUCTION_RBR

#include "Instruction_register2Register.h"

class Instruction_rbr : public Instruction_register2Register {
friend class InstructionRegistry;
public:
    virtual ~Instruction_rbr();
    virtual void execute() const;
private:
    Instruction_rbr();
};


#endif
