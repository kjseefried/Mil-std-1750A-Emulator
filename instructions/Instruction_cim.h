
#ifndef INSTRUCTION_CIM
#define INSTRUCTION_CIM

#include "Instruction_immediate.h"

class Instruction_cim : public Instruction_immediate {
friend class InstructionRegistry;
public:
    virtual ~Instruction_cim();
    virtual void execute() const;
private:
    Instruction_cim();
};


#endif
