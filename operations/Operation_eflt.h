
#ifndef OPERATION_EFLT
#define OPERATION_EFLT 

#include "AbstractOperation.h"

class Operation_eflt : public AbstractOperation {
public:
    Operation_eflt();
    virtual ~Operation_eflt();
    virtual void execute() const;
private:
};


#endif
