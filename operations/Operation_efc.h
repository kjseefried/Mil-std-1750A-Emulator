
#ifndef OPERATION_EFC
#define OPERATION_EFC 

#include "AbstractOperation.h"

class Operation_efc : public AbstractOperation {
public:
    Operation_efc();
    virtual ~Operation_efc();
    virtual void execute() const;
private:
};


#endif
