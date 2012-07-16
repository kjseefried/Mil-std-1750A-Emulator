
#ifndef INSTRUCTION_FS
#define INSTRUCTION_FS

#include "Instruction_longInstruction.h"

class Instruction_fs : public Instruction_longInstruction {
friend class InstructionRegistry;
public:
    virtual ~Instruction_fs();
    virtual void execute() const;
private:
    Instruction_fs();
};


#endif
