
#ifndef INSTRUCTION_DLR
#define INSTRUCTION_DLR

#include "Instruction_register2Register.h"

class Instruction_dlr : public Instruction_register2Register {
friend class InstructionRegistry;
public:
    virtual ~Instruction_dlr();
    virtual void execute() const;
private:
    Instruction_dlr();
};


#endif
