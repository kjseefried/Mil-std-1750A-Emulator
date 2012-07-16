
#ifndef INSTRUCTION_DISP
#define INSTRUCTION_DISP

#include "Instruction_immediateShortPositive.h"

class Instruction_disp : public Instruction_immediateShortPositive {
friend class InstructionRegistry;
public:
    virtual ~Instruction_disp();
    virtual void execute() const;
private:
    Instruction_disp();
};


#endif
