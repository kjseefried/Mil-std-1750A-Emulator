
#ifndef INSTRUCTION_VIO
#define INSTRUCTION_VIO

#include "Instruction_longInstruction.h"

class Instruction_vio : public Instruction_longInstruction {
friend class InstructionRegistry;
public:
    virtual ~Instruction_vio();
    virtual void execute() const;
private:
    Instruction_vio();
};


#endif
