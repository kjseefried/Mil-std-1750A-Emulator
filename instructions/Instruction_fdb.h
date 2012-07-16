
#ifndef INSTRUCTION_FDB
#define INSTRUCTION_FDB

#include "Instruction_baseRelative.h"

class Instruction_fdb : public Instruction_baseRelative {
friend class InstructionRegistry;
public:
    virtual ~Instruction_fdb();
    virtual void execute() const;
private:
    Instruction_fdb();
};


#endif
