
#ifndef INSTRUCTION_DMR
#define INSTRUCTION_DMR

#include "Instruction_register2Register.h"

class Instruction_dmr : public Instruction_register2Register {
friend class InstructionRegistry;
public:
    virtual ~Instruction_dmr();
    virtual void execute() const;
private:
    Instruction_dmr();
};


#endif
