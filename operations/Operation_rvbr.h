
#ifndef OPERATION_RVBR
#define OPERATION_RVBR

#include "AbstractOperation.h"

class Operation_rvbr : public AbstractOperation {
public:
    Operation_rvbr();
    virtual ~Operation_rvbr();
    virtual void execute() const;
private:
};


#endif
