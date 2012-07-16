
#ifndef INSTRUCTION_SRL
#define INSTRUCTION_SRL

#include "Instruction_register2Register.h"

class Instruction_srl : public Instruction_register2Register {
friend class InstructionRegistry;
public:
    virtual ~Instruction_srl();
    virtual void execute() const;
private:
    Instruction_srl();
};


#endif
