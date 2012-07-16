
#ifndef INSTRUCTION_JS
#define INSTRUCTION_JS

#include "Instruction_longInstructionData.h"

class Instruction_js : public Instruction_longInstructionData {
friend class InstructionRegistry;
public:
    virtual ~Instruction_js();
    virtual void execute() const;
private:
    Instruction_js();
};


#endif
