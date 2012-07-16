
#ifndef OPERATION_DSLR
#define OPERATION_DSLR

#include "AbstractOperation.h"

class Operation_dslr : public AbstractOperation {
public:
    Operation_dslr();
    virtual ~Operation_dslr();
    virtual void execute() const;
private:
};


#endif
