
#ifndef OPERATION_EFIX
#define OPERATION_EFIX 

#include "AbstractOperation.h"

class Operation_efix : public AbstractOperation {
public:
    Operation_efix();
    virtual ~Operation_efix();
    virtual void execute() const;
private:
};


#endif
