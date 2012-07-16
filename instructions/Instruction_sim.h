
#ifndef INSTRUCTION_SIM
#define INSTRUCTION_SIM

#include "Instruction_immediate.h"

class Instruction_sim : public Instruction_immediate {
friend class InstructionRegistry;
public:
    virtual ~Instruction_sim();
    virtual void execute() const;
private:
    Instruction_sim();
};


#endif
