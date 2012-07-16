
#ifndef OPERATION_DS
#define OPERATION_DS

#include "AbstractOperation.h"

class Operation_ds : public AbstractOperation {
public:
    Operation_ds();
    virtual ~Operation_ds();
    virtual void execute() const;
private:
};


#endif
