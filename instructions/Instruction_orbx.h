
#ifndef INSTRUCTION_ORBX
#define INSTRUCTION_ORBX

#include "Instruction_baseRelativeIndexed.h"

class Instruction_orbx : public Instruction_baseRelativeIndexed {
friend class InstructionRegistry;
public:
    virtual ~Instruction_orbx();
    virtual void execute() const;
private:
    Instruction_orbx();
};


#endif
