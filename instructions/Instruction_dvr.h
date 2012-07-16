
#ifndef INSTRUCTION_DVR
#define INSTRUCTION_DVR

#include "Instruction_register2Register.h"

class Instruction_dvr : public Instruction_register2Register {
friend class InstructionRegistry;
public:
    virtual ~Instruction_dvr();
    virtual void execute() const;
private:
    Instruction_dvr();
};


#endif
