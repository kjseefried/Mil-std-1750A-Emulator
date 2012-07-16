
#ifndef OPERATION_DV
#define OPERATION_DV

#include "AbstractOperation.h"

class Operation_dv : public AbstractOperation {
public:
    Operation_dv();
    virtual ~Operation_dv();
    virtual void execute() const;
private:
};


#endif
