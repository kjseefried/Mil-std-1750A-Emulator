
#ifndef OPERATION_URS
#define OPERATION_URS

#include "AbstractOperation.h"

class Operation_urs : public AbstractOperation {
public:
    Operation_urs();
    virtual ~Operation_urs();
    virtual void execute() const;
private:
};


#endif
