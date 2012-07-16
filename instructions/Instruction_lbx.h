
#ifndef INSTRUCTION_LBX
#define INSTRUCTION_LBX

#include "Instruction_baseRelativeIndexed.h"

class Instruction_lbx : public Instruction_baseRelativeIndexed {
friend class InstructionRegistry;
public:
    virtual ~Instruction_lbx();
    virtual void execute() const;
private:
    Instruction_lbx();
};


#endif
