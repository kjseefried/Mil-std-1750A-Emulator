
#ifndef OPERATION_EFL
#define OPERATION_EFL

#include "AbstractOperation.h"

class Operation_efl : public AbstractOperation {
public:
    Operation_efl();
    virtual ~Operation_efl();
    virtual void execute() const;
private:
};


#endif
