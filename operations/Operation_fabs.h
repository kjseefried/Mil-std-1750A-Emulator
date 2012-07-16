
#ifndef OPERATION_FABS
#define OPERATION_FABS

#include "AbstractOperation.h"

class Operation_fabs : public AbstractOperation {
public:
    Operation_fabs();
    virtual ~Operation_fabs();
    virtual void execute() const;
private:
};


#endif
