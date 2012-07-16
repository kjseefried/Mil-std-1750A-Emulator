
#ifndef INSTRUCTION_XORR
#define INSTRUCTION_XORR

#include "Instruction_register2Register.h"

class Instruction_xorr : public Instruction_register2Register {
friend class InstructionRegistry;
public:
    virtual ~Instruction_xorr();
    virtual void execute() const;
private:
    Instruction_xorr();
};


#endif
