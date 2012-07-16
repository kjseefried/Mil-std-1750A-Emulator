
#ifndef INSTRUCTION_ABX
#define INSTRUCTION_ABX

#include "Instruction_baseRelativeIndexed.h"

class Instruction_abx : public Instruction_baseRelativeIndexed {
friend class InstructionRegistry;
public:
    virtual ~Instruction_abx();
    virtual void execute() const;
private:
    Instruction_abx();
};


#endif
