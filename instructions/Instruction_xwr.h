
#ifndef INSTRUCTION_XWR
#define INSTRUCTION_XWR

#include "Instruction_register2Register.h"

class Instruction_xwr : public Instruction_register2Register {
friend class InstructionRegistry;
public:
    virtual ~Instruction_xwr();
    virtual void execute() const;
private:
    Instruction_xwr();
};


#endif
