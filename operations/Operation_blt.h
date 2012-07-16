
#ifndef OPERATION_BLT
#define OPERATION_BLT

#include "AbstractOperation.h"

class Operation_blt : public AbstractOperation {
public:
    Operation_blt();
    virtual ~Operation_blt();
    virtual void execute() const;
private:
};


#endif
