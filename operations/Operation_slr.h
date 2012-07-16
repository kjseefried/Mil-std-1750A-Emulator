
#ifndef OPERATION_SLR
#define OPERATION_SLR

#include "AbstractOperation.h"

class Operation_slr : public AbstractOperation {
public:
    Operation_slr();
    virtual ~Operation_slr();
    virtual void execute() const;
private:
};


#endif
