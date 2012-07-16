
#ifndef OPERATION_AND
#define OPERATION_AND

#include "AbstractOperation.h"

class Operation_and : public AbstractOperation {
public:
    Operation_and();
    virtual ~Operation_and();
    virtual void execute() const;
private:
};


#endif
