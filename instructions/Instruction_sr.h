
#ifndef INSTRUCTION_SR
#define INSTRUCTION_SR

#include "Instruction_register2Register.h"

class Instruction_sr : public Instruction_register2Register {
friend class InstructionRegistry;
public:
    virtual ~Instruction_sr();
    virtual void execute() const;
private:
    Instruction_sr();
};


#endif
