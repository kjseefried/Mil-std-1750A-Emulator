
#ifndef INSTRUCTION_XORM
#define INSTRUCTION_XORM

#include "Instruction_immediate.h"

class Instruction_xorm : public Instruction_immediate {
friend class InstructionRegistry;
public:
    virtual ~Instruction_xorm();
    virtual void execute() const;
private:
    Instruction_xorm();
};


#endif
