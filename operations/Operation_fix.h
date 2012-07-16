
#ifndef OPERATION_FIX
#define OPERATION_FIX 

#include "AbstractOperation.h"

class Operation_fix : public AbstractOperation {
public:
    Operation_fix();
    virtual ~Operation_fix();
    virtual void execute() const;
private:
};


#endif
