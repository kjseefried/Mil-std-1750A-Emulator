
#ifndef INSTRUCTION_DLI
#define INSTRUCTION_DLI

#include "Instruction_longInstructionIndirect.h"

class Instruction_dli : public Instruction_longInstructionIndirect {
friend class InstructionRegistry;
public:
    virtual ~Instruction_dli();
    virtual void execute() const;
private:
    Instruction_dli();
};


#endif
