
#ifndef OPERATION_FNEG
#define OPERATION_FNEG

#include "AbstractOperation.h"

class Operation_fneg : public AbstractOperation {
public:
    Operation_fneg();
    virtual ~Operation_fneg();
    virtual void execute() const;
private:
};


#endif
