
#ifndef INSTRUCTION_FCBX
#define INSTRUCTION_FCBX

#include "Instruction_baseRelativeIndexed.h"

class Instruction_fcbx : public Instruction_baseRelativeIndexed {
friend class InstructionRegistry;
public:
    virtual ~Instruction_fcbx();
    virtual void execute() const;
private:
    Instruction_fcbx();
};


#endif
