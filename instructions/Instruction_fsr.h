
#ifndef INSTRUCTION_FSR
#define INSTRUCTION_FSR

#include "Instruction_register2Register.h"

class Instruction_fsr : public Instruction_register2Register {
friend class InstructionRegistry;
public:
    virtual ~Instruction_fsr();
    virtual void execute() const;
private:
    Instruction_fsr();
};


#endif
