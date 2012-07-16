
#ifndef INSTRUCTION_SLL
#define INSTRUCTION_SLL

#include "Instruction_register2Register.h"

class Instruction_sll : public Instruction_register2Register {
friend class InstructionRegistry;
public:
    virtual ~Instruction_sll();
    virtual void execute() const;
private:
    Instruction_sll();
};


#endif
