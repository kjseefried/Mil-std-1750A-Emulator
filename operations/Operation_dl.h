
#ifndef OPERATION_DL
#define OPERATION_DL

#include "AbstractOperation.h"

class Operation_dl : public AbstractOperation {
public:
    Operation_dl();
    virtual ~Operation_dl();
    virtual void execute() const;
private:
};


#endif
