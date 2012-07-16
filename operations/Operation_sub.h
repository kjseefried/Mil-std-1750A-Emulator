
#ifndef OPERATION_SUB
#define OPERATION_SUB

#include "AbstractOperation.h"

class Operation_sub : public AbstractOperation {
public:
    Operation_sub();
    virtual ~Operation_sub();
    virtual void execute() const;
private:
};


#endif
