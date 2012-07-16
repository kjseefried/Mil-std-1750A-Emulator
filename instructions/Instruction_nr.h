
#ifndef INSTRUCTION_NR
#define INSTRUCTION_NR

#include "Instruction_register2Register.h"

class Instruction_nr : public Instruction_register2Register {
friend class InstructionRegistry;
public:
    virtual ~Instruction_nr();
    virtual void execute() const;
private:
    Instruction_nr();
};


#endif
