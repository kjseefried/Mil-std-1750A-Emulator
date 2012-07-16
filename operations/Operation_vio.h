
#ifndef OPERATION_VIO
#define OPERATION_VIO

#include "AbstractOperation.h"

class Operation_vio : public AbstractOperation {
public:
    Operation_vio();
    virtual ~Operation_vio();
    virtual void execute() const;
private:
};


#endif
