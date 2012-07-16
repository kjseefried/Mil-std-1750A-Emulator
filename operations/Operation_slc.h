
#ifndef OPERATION_SLC
#define OPERATION_SLC

#include "AbstractOperation.h"

class Operation_slc : public AbstractOperation {
public:
    Operation_slc();
    virtual ~Operation_slc();
    virtual void execute() const;
private:
};


#endif
