
#ifndef OPERATION_EFST
#define OPERATION_EFST

#include "AbstractOperation.h"

class Operation_efst : public AbstractOperation {
public:
    Operation_efst();
    virtual ~Operation_efst();
    virtual void execute() const;
private:
};


#endif
