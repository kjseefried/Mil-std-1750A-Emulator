
#ifndef INSTRUCTION_EFSR
#define INSTRUCTION_EFSR

#include "Instruction_register2Register.h"

class Instruction_efsr : public Instruction_register2Register {
friend class InstructionRegistry;
public:
    virtual ~Instruction_efsr();
    virtual void execute() const;
private:
    Instruction_efsr();
};


#endif
