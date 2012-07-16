
#ifndef INSTRUCTION_LISP
#define INSTRUCTION_LISP

#include "Instruction_immediateShortPositive.h"

class Instruction_lisp : public Instruction_immediateShortPositive {
friend class InstructionRegistry;
public:
    virtual ~Instruction_lisp();
    virtual void execute() const;
private:
    Instruction_lisp();
};


#endif
