
#ifndef INSTRUCTION_DB
#define INSTRUCTION_DB

#include "Instruction_baseRelative.h"

class Instruction_db : public Instruction_baseRelative {
friend class InstructionRegistry;
public:
    virtual ~Instruction_db();
    virtual void execute() const;
private:
    Instruction_db();
};


#endif
