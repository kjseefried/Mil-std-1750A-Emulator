
#ifndef INSTRUCTION_DCR
#define INSTRUCTION_DCR

#include "Instruction_register2Register.h"

class Instruction_dcr : public Instruction_register2Register {
friend class InstructionRegistry;
public:
    virtual ~Instruction_dcr();
    virtual void execute() const;
private:
    Instruction_dcr();
};


#endif
