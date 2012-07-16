
#ifndef INSTRUCTION_LI
#define INSTRUCTION_LI

#include "Instruction_longInstructionIndirect.h"

class Instruction_li : public Instruction_longInstructionIndirect {
friend class InstructionRegistry;
public:
    virtual ~Instruction_li();
    virtual void execute() const;
private:
    Instruction_li();
};


#endif
