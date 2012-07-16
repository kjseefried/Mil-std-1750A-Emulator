
#ifndef OPERATION_LUB
#define OPERATION_LUB

#include "AbstractOperation.h"

class Operation_lub : public AbstractOperation {
public:
    Operation_lub();
    virtual ~Operation_lub();
    virtual void execute() const;
private:
};


#endif
