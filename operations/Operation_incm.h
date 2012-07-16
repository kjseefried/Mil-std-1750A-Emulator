
#ifndef OPERATION_INCM
#define OPERATION_INCM

#include "AbstractOperation.h"

class Operation_incm : public AbstractOperation {
public:
    Operation_incm();
    virtual ~Operation_incm();
    virtual void execute() const;
private:
};


#endif
