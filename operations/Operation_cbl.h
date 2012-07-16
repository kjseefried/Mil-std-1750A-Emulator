
#ifndef OPERATION_CBL
#define OPERATION_CBL 

#include "AbstractOperation.h"

class Operation_cbl : public AbstractOperation {
public:
    Operation_cbl();
    virtual ~Operation_cbl();
    virtual void execute() const;
private:
};


#endif
