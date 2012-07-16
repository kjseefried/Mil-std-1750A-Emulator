
#ifndef OPERATION_NOP
#define OPERATION_NOP 

#include "AbstractOperation.h"

class Operation_nop : public AbstractOperation {
public:
    Operation_nop();
    virtual ~Operation_nop();
    virtual void execute() const;
private:
};


#endif
