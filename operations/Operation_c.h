
#ifndef OPERATION_C
#define OPERATION_C

#include "AbstractOperation.h"

class Operation_c : public AbstractOperation {
public:
    Operation_c();
    virtual ~Operation_c();
    virtual void execute() const;
private:
};


#endif
