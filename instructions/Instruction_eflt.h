
#ifndef INSTRUCTION_EFLT
#define INSTRUCTION_EFLT

#include "Instruction_register2Register.h"

class Instruction_eflt : public Instruction_register2Register {
friend class InstructionRegistry;
public:
    virtual ~Instruction_eflt();
    virtual void execute() const;
private:
    Instruction_eflt();
};


#endif
