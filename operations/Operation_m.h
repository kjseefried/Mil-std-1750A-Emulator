
#ifndef OPERATION_M
#define OPERATION_M

#include "AbstractOperation.h"

class Operation_m : public AbstractOperation {
public:
    Operation_m();
    virtual ~Operation_m();
    virtual void execute() const;
private:
};


#endif
