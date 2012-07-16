
#ifndef INSTRUCTION_DLBX
#define INSTRUCTION_DLBX

#include "Instruction_baseRelativeIndexed.h"

class Instruction_dlbx : public Instruction_baseRelativeIndexed {
friend class InstructionRegistry;
public:
    virtual ~Instruction_dlbx();
    virtual void execute() const;
private:
    Instruction_dlbx();
};


#endif
