
#ifndef INSTRUCTION_XIO
#define INSTRUCTION_XIO

#include "Instruction_longInstructionData.h"

class Instruction_xio : public Instruction_longInstructionData {
friend class InstructionRegistry;
public:
    virtual ~Instruction_xio();
    virtual void execute() const;
private:
    Instruction_xio();
};


#endif
