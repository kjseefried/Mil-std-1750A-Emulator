
#ifndef INSTRUCTION_TSB
#define INSTRUCTION_TSB

#include "Instruction_register2Register.h"

class Instruction_tsb : public Instruction_register2Register {
friend class InstructionRegistry;
public:
    virtual ~Instruction_tsb();
    virtual void execute() const;
private:
    Instruction_tsb();
};


#endif
