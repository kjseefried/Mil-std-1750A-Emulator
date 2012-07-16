
#ifndef OPERATION_XWR
#define OPERATION_XWR 

#include "AbstractOperation.h"

class Operation_xwr : public AbstractOperation {
public:
    Operation_xwr();
    virtual ~Operation_xwr();
    virtual void execute() const;
private:
};


#endif
