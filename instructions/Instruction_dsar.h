
#ifndef INSTRUCTION_DSAR
#define INSTRUCTION_DSAR

#include "Instruction_register2Register.h"

class Instruction_dsar : public Instruction_register2Register {
friend class InstructionRegistry;
public:
    virtual ~Instruction_dsar();
    virtual void execute() const;
private:
    Instruction_dsar();
};


#endif
