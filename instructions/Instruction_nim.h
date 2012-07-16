
#ifndef INSTRUCTION_NIM
#define INSTRUCTION_NIM

#include "Instruction_immediate.h"

class Instruction_nim : public Instruction_immediate {
friend class InstructionRegistry;
public:
    virtual ~Instruction_nim();
    virtual void execute() const;
private:
    Instruction_nim();
};


#endif
