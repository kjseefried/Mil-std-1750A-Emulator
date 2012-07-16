
#ifndef OPERATION_DSRL
#define OPERATION_DSRL

#include "AbstractOperation.h"

class Operation_dsrl : public AbstractOperation {
public:
    Operation_dsrl();
    virtual ~Operation_dsrl();
    virtual void execute() const;
private:
};


#endif
