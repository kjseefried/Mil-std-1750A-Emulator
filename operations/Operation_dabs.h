
#ifndef OPERATION_DABS
#define OPERATION_DABS

#include "AbstractOperation.h"

class Operation_dabs : public AbstractOperation {
public:
    Operation_dabs();
    virtual ~Operation_dabs();
    virtual void execute() const;
private:
};


#endif
