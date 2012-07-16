
#ifndef OPERATION_DM
#define OPERATION_DM

#include "AbstractOperation.h"

class Operation_dm : public AbstractOperation {
public:
    Operation_dm();
    virtual ~Operation_dm();
    virtual void execute() const;
private:
};


#endif
