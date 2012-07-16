
#ifndef INSTRUCTION_FD
#define INSTRUCTION_FD

#include "Instruction_longInstruction.h"

class Instruction_fd : public Instruction_longInstruction {
friend class InstructionRegistry;
public:
    virtual ~Instruction_fd();
    virtual void execute() const;
private:
    Instruction_fd();
};


#endif
