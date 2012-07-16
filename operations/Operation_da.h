
#ifndef OPERATION_DA
#define OPERATION_DA

#include "AbstractOperation.h"

class Operation_da : public AbstractOperation {
public:
    Operation_da();
    virtual ~Operation_da();
    virtual void execute() const;
private:
};


#endif
