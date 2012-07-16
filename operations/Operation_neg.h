
#ifndef OPERATION_NEG
#define OPERATION_NEG

#include "AbstractOperation.h"

class Operation_neg : public AbstractOperation {
public:
    Operation_neg();
    virtual ~Operation_neg();
    virtual void execute() const;
private:
};


#endif
