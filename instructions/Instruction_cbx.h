
#ifndef INSTRUCTION_CBX
#define INSTRUCTION_CBX

#include "Instruction_baseRelativeIndexed.h"

class Instruction_cbx : public Instruction_baseRelativeIndexed {
friend class InstructionRegistry;
public:
    virtual ~Instruction_cbx();
    virtual void execute() const;
private:
    Instruction_cbx();
};


#endif
