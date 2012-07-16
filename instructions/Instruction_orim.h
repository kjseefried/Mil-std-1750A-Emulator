
#ifndef INSTRUCTION_ORIM
#define INSTRUCTION_ORIM

#include "Instruction_immediate.h"

class Instruction_orim : public Instruction_immediate {
friend class InstructionRegistry;
public:
    virtual ~Instruction_orim();
    virtual void execute() const;
private:
    Instruction_orim();
};


#endif
