
#ifndef OPERATION_EFS
#define OPERATION_EFS

#include "AbstractOperation.h"

class Operation_efs : public AbstractOperation {
public:
    Operation_efs();
    virtual ~Operation_efs();
    virtual void execute() const;
private:
};


#endif
