
#ifndef OPERATION_SLB
#define OPERATION_SLB

#include "AbstractOperation.h"

class Operation_slb : public AbstractOperation {
public:
    Operation_slb();
    virtual ~Operation_slb();
    virtual void execute() const;
private:
};


#endif
