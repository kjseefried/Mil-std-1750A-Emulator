
#ifndef INSTRUCTION_SRM
#define INSTRUCTION_SRM

#include "Instruction_longInstruction.h"

class Instruction_srm : public Instruction_longInstruction {
friend class InstructionRegistry;
public:
    virtual ~Instruction_srm();
    virtual void execute() const;
private:
    Instruction_srm();
};


#endif
