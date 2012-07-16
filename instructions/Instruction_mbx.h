
#ifndef INSTRUCTION_MBX
#define INSTRUCTION_MBX

#include "Instruction_baseRelativeIndexed.h"

class Instruction_mbx : public Instruction_baseRelativeIndexed {
friend class InstructionRegistry;
public:
    virtual ~Instruction_mbx();
    virtual void execute() const;
private:
    Instruction_mbx();
};


#endif
