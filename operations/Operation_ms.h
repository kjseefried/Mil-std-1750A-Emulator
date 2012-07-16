
#ifndef OPERATION_MS
#define OPERATION_MS

#include "AbstractOperation.h"

class Operation_ms : public AbstractOperation {
public:
    Operation_ms();
    virtual ~Operation_ms();
    virtual void execute() const;
private:
};


#endif
