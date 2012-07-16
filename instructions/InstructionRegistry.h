
#ifndef INSTRUCTION_REGISTRY
#define INSTRUCTION_REGISTRY 

#include "AbstractInstruction.h"
#include "Value_i16.h"
#include <vector>

class InstructionRegistry {

public:
    static InstructionRegistry & instance();
    virtual ~InstructionRegistry();

    const AbstractInstruction * findInstruction (const Value_i16 & v);

protected:

private:
    InstructionRegistry();

    AbstractInstruction * m_instructions[256][256];
    AbstractInstruction * m_instructionsExtended[256];
    std::vector<AbstractInstruction *> m_instructionsVec;

    InstructionRegistry(const InstructionRegistry &);
    InstructionRegistry & operator=(const InstructionRegistry &);

};


#endif
