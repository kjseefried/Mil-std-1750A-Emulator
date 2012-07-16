
#ifndef OPERATION_BGT
#define OPERATION_BGT

#include "AbstractOperation.h"

class Operation_bgt : public AbstractOperation {
public:
    Operation_bgt();
    virtual ~Operation_bgt();
    virtual void execute() const;
private:
};


#endif
