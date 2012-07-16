
#ifndef OPERATION_ABS
#define OPERATION_ABS

#include "AbstractOperation.h"

class Operation_abs : public AbstractOperation {
public:
    Operation_abs();
    virtual ~Operation_abs();
    virtual void execute() const;
private:
};


#endif
