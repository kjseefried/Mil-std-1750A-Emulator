
#ifndef INSTRUCTION_STBX
#define INSTRUCTION_STBX

#include "Instruction_baseRelativeIndexed.h"

class Instruction_stbx : public Instruction_baseRelativeIndexed {
friend class InstructionRegistry;
public:
    virtual ~Instruction_stbx();
    virtual void execute() const;
private:
    Instruction_stbx();
};


#endif
