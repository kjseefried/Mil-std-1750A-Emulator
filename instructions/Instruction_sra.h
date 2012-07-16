
#ifndef INSTRUCTION_SRA
#define INSTRUCTION_SRA

#include "Instruction_register2Register.h"

class Instruction_sra : public Instruction_register2Register {
friend class InstructionRegistry;
public:
    virtual ~Instruction_sra();
    virtual void execute() const;
private:
    Instruction_sra();
};


#endif
