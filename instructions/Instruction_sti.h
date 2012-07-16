
#ifndef INSTRUCTION_STI
#define INSTRUCTION_STI

#include "Instruction_longInstructionIndirect.h"

class Instruction_sti : public Instruction_longInstructionIndirect {
friend class InstructionRegistry;
public:
    virtual ~Instruction_sti();
    virtual void execute() const;
private:
    Instruction_sti();
};


#endif
