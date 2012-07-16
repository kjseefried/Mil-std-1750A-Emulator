
#ifndef INSTRUCTION_TVBR
#define INSTRUCTION_TVBR

#include "Instruction_register2Register.h"

class Instruction_tvbr : public Instruction_register2Register {
friend class InstructionRegistry;
public:
    virtual ~Instruction_tvbr();
    virtual void execute() const;
private:
    Instruction_tvbr();
};


#endif
