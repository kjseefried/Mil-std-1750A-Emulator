
#ifndef OPERATION_FD
#define OPERATION_FD

#include "AbstractOperation.h"

class Operation_fd : public AbstractOperation {
public:
    Operation_fd();
    virtual ~Operation_fd();
    virtual void execute() const;
private:
};


#endif
