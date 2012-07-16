
#ifndef INSTRUCTION_SAR
#define INSTRUCTION_SAR

#include "Instruction_register2Register.h"

class Instruction_sar : public Instruction_register2Register {
friend class InstructionRegistry;
public:
    virtual ~Instruction_sar();
    virtual void execute() const;
private:
    Instruction_sar();
};


#endif
