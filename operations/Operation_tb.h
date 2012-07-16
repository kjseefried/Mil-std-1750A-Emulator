
#ifndef OPERATION_TB
#define OPERATION_TB

#include "AbstractOperation.h"

class Operation_tb : public AbstractOperation {
public:
    Operation_tb();
    virtual ~Operation_tb();
    virtual void execute() const;
private:
};


#endif
