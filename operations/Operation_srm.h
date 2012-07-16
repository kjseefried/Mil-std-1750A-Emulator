
#ifndef OPERATION_SRM
#define OPERATION_SRM

#include "AbstractOperation.h"

class Operation_srm : public AbstractOperation {
public:
    Operation_srm();
    virtual ~Operation_srm();
    virtual void execute() const;
private:
};


#endif
