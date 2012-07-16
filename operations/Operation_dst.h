
#ifndef OPERATION_DST
#define OPERATION_DST

#include "AbstractOperation.h"

class Operation_dst : public AbstractOperation {
public:
    Operation_dst();
    virtual ~Operation_dst();
    virtual void execute() const;
private:
};


#endif
