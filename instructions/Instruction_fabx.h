
#ifndef INSTRUCTION_FABX
#define INSTRUCTION_FABX

#include "Instruction_baseRelativeIndexed.h"

class Instruction_fabx : public Instruction_baseRelativeIndexed {
friend class InstructionRegistry;
public:
    virtual ~Instruction_fabx();
    virtual void execute() const;
private:
    Instruction_fabx();
};


#endif
