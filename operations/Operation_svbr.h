
#ifndef OPERATION_SVBR
#define OPERATION_SVBR

#include "AbstractOperation.h"

class Operation_svbr : public AbstractOperation {
public:
    Operation_svbr();
    virtual ~Operation_svbr();
    virtual void execute() const;
private:
};


#endif
