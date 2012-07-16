
#ifndef OPERATION_A
#define OPERATION_A

#include "AbstractOperation.h"

class Operation_a : public AbstractOperation {
public:
    Operation_a();
    virtual ~Operation_a();
    virtual void execute() const;
private:
};


#endif
