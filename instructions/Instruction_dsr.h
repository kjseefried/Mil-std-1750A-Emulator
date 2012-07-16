
#ifndef INSTRUCTION_DSR
#define INSTRUCTION_DSR

#include "Instruction_register2Register.h"

class Instruction_dsr : public Instruction_register2Register {
friend class InstructionRegistry;
public:
    virtual ~Instruction_dsr();
    virtual void execute() const;
private:
    Instruction_dsr();
};


#endif
