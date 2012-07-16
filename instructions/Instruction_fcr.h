
#ifndef INSTRUCTION_FCR
#define INSTRUCTION_FCR

#include "Instruction_register2Register.h"

class Instruction_fcr : public Instruction_register2Register {
friend class InstructionRegistry;
public:
    virtual ~Instruction_fcr();
    virtual void execute() const;
private:
    Instruction_fcr();
};


#endif
