
#ifndef OPERATION_N
#define OPERATION_N

#include "AbstractOperation.h"

class Operation_n : public AbstractOperation {
public:
    Operation_n();
    virtual ~Operation_n();
    virtual void execute() const;
private:
};


#endif
