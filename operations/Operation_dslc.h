
#ifndef OPERATION_DSLC
#define OPERATION_DSLC

#include "AbstractOperation.h"

class Operation_dslc : public AbstractOperation {
public:
    Operation_dslc();
    virtual ~Operation_dslc();
    virtual void execute() const;
private:
};


#endif
