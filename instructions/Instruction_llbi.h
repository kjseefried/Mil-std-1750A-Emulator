
#ifndef INSTRUCTION_LLBI
#define INSTRUCTION_LLBI

#include "Instruction_longInstructionIndirect.h"

class Instruction_llbi : public Instruction_longInstructionIndirect {
friend class InstructionRegistry;
public:
    virtual ~Instruction_llbi();
    virtual void execute() const;
private:
    Instruction_llbi();
};


#endif
