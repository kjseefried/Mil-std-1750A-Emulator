
#ifndef OPERATION_S
#define OPERATION_S

#include "AbstractOperation.h"

class Operation_s : public AbstractOperation {
public:
    Operation_s();
    virtual ~Operation_s();
    virtual void execute() const;
private:
};


#endif
