
#ifndef OPERATION_DSLL
#define OPERATION_DSLL

#include "AbstractOperation.h"

class Operation_dsll : public AbstractOperation {
public:
    Operation_dsll();
    virtual ~Operation_dsll();
    virtual void execute() const;
private:
};


#endif
