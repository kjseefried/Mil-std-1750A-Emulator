
#ifndef OPERATION_EFD
#define OPERATION_EFD

#include "AbstractOperation.h"

class Operation_efd : public AbstractOperation {
public:
    Operation_efd();
    virtual ~Operation_efd();
    virtual void execute() const;
private:
};


#endif
