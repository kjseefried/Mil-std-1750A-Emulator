
#ifndef OPERATION_FM
#define OPERATION_FM

#include "AbstractOperation.h"

class Operation_fm : public AbstractOperation {
public:
    Operation_fm();
    virtual ~Operation_fm();
    virtual void execute() const;
private:
};


#endif
