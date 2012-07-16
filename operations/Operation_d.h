
#ifndef OPERATION_D
#define OPERATION_D

#include "AbstractOperation.h"

class Operation_d : public AbstractOperation {
public:
    Operation_d();
    virtual ~Operation_d();
    virtual void execute() const;
private:
};


#endif
