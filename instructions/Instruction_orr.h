
#ifndef INSTRUCTION_ORR
#define INSTRUCTION_ORR

#include "Instruction_register2Register.h"

class Instruction_orr : public Instruction_register2Register {
friend class InstructionRegistry;
public:
    virtual ~Instruction_orr();
    virtual void execute() const;
private:
    Instruction_orr();
};


#endif
