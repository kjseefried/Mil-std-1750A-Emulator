
#ifndef INSTRUCTION_ANDB
#define INSTRUCTION_ANDB

#include "Instruction_baseRelative.h"

class Instruction_andb : public Instruction_baseRelative {
friend class InstructionRegistry;
public:
    virtual ~Instruction_andb();
    virtual void execute() const;
private:
    Instruction_andb();
};


#endif
