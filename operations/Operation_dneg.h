
#ifndef OPERATION_DNEG
#define OPERATION_DNEG

#include "AbstractOperation.h"

class Operation_dneg : public AbstractOperation {
public:
    Operation_dneg();
    virtual ~Operation_dneg();
    virtual void execute() const;
private:
};


#endif
