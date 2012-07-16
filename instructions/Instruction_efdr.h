
#ifndef INSTRUCTION_EFDR
#define INSTRUCTION_EFDR

#include "Instruction_register2Register.h"

class Instruction_efdr : public Instruction_register2Register {
friend class InstructionRegistry;
public:
    virtual ~Instruction_efdr();
    virtual void execute() const;
private:
    Instruction_efdr();
};


#endif
