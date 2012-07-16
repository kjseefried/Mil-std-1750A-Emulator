
#ifndef OPERATION_EFA
#define OPERATION_EFA

#include "AbstractOperation.h"

class Operation_efa : public AbstractOperation {
public:
    Operation_efa();
    virtual ~Operation_efa();
    virtual void execute() const;
private:
};


#endif
