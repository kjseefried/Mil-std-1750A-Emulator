
#ifndef OPERATION_FLT
#define OPERATION_FLT 

#include "AbstractOperation.h"

class Operation_flt : public AbstractOperation {
public:
    Operation_flt();
    virtual ~Operation_flt();
    virtual void execute() const;
private:
};


#endif
