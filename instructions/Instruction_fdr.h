
#ifndef INSTRUCTION_FDR
#define INSTRUCTION_FDR

#include "Instruction_register2Register.h"

class Instruction_fdr : public Instruction_register2Register {
friend class InstructionRegistry;
public:
    virtual ~Instruction_fdr();
    virtual void execute() const;
private:
    Instruction_fdr();
};


#endif
