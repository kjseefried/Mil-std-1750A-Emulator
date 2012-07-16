
#ifndef INSTRUCTION_DAR
#define INSTRUCTION_DAR

#include "Instruction_register2Register.h"

class Instruction_dar : public Instruction_register2Register {
friend class InstructionRegistry;
public:
    virtual ~Instruction_dar();
    virtual void execute() const;
private:
    Instruction_dar();
};


#endif
