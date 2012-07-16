
#ifndef INSTRUCTION_DDR
#define INSTRUCTION_DDR

#include "Instruction_register2Register.h"

class Instruction_ddr : public Instruction_register2Register {
friend class InstructionRegistry;
public:
    virtual ~Instruction_ddr();
    virtual void execute() const;
private:
    Instruction_ddr();
};


#endif
