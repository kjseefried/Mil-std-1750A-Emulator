
#ifndef OPERATION_DC
#define OPERATION_DC 

#include "AbstractOperation.h"

class Operation_dc : public AbstractOperation {
public:
    Operation_dc();
    virtual ~Operation_dc();
    virtual void execute() const;
private:
};


#endif
