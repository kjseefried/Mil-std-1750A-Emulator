
#ifndef OPERATION_OR
#define OPERATION_OR

#include "AbstractOperation.h"

class Operation_or : public AbstractOperation {
public:
    Operation_or();
    virtual ~Operation_or();
    virtual void execute() const;
private:
};


#endif
