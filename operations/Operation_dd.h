
#ifndef OPERATION_DD
#define OPERATION_DD

#include "AbstractOperation.h"

class Operation_dd : public AbstractOperation {
public:
    Operation_dd();
    virtual ~Operation_dd();
    virtual void execute() const;
private:
};


#endif
