
#ifndef INSTRUCTION_ANDR
#define INSTRUCTION_ANDR

#include "Instruction_register2Register.h"

class Instruction_andr : public Instruction_register2Register {
friend class InstructionRegistry;
public:
    virtual ~Instruction_andr();
    virtual void execute() const;
private:
    Instruction_andr();
};


#endif
