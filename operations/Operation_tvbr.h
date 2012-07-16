
#ifndef OPERATION_TVBR
#define OPERATION_TVBR

#include "AbstractOperation.h"

class Operation_tvbr : public AbstractOperation {
public:
    Operation_tvbr();
    virtual ~Operation_tvbr();
    virtual void execute() const;
private:
};


#endif
