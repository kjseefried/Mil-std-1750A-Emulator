
#ifndef OPERATION_PSHM
#define OPERATION_PSHM

#include "AbstractOperation.h"

class Operation_pshm : public AbstractOperation {
public:
    Operation_pshm();
    virtual ~Operation_pshm();
    virtual void execute() const;
private:
};


#endif
