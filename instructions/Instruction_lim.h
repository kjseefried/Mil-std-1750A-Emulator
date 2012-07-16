
#ifndef INSTRUCTION_LIM
#define INSTRUCTION_LIM

#include "Instruction_longInstructionData.h"

class Instruction_lim : public Instruction_longInstructionData {
friend class InstructionRegistry;
public:
    virtual ~Instruction_lim();
    virtual void execute() const;
private:
    Instruction_lim();
};


#endif
