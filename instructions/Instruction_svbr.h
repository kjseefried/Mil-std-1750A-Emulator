
#ifndef INSTRUCTION_SVBR
#define INSTRUCTION_SVBR

#include "Instruction_register2Register.h"

class Instruction_svbr : public Instruction_register2Register {
friend class InstructionRegistry;
public:
    virtual ~Instruction_svbr();
    virtual void execute() const;
private:
    Instruction_svbr();
};


#endif
