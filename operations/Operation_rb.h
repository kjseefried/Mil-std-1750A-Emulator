
#ifndef OPERATION_RB
#define OPERATION_RB

#include "AbstractOperation.h"

class Operation_rb : public AbstractOperation {
public:
    Operation_rb();
    virtual ~Operation_rb();
    virtual void execute() const;
private:
};


#endif
