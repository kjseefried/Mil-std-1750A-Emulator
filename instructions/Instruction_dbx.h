
#ifndef INSTRUCTION_DBX
#define INSTRUCTION_DBX

#include "Instruction_baseRelativeIndexed.h"

class Instruction_dbx : public Instruction_baseRelativeIndexed {
friend class InstructionRegistry;
public:
    virtual ~Instruction_dbx();
    virtual void execute() const;
private:
    Instruction_dbx();
};


#endif
