
#ifndef INSTRUCTION_STB
#define INSTRUCTION_STB

#include "Instruction_baseRelative.h"

class Instruction_stb : public Instruction_baseRelative {
friend class InstructionRegistry;
public:
    virtual ~Instruction_stb();
    virtual void execute() const;
private:
    Instruction_stb();
};


#endif
