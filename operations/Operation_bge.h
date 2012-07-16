
#ifndef OPERATION_BGE
#define OPERATION_BGE

#include "AbstractOperation.h"

class Operation_bge : public AbstractOperation {
public:
    Operation_bge();
    virtual ~Operation_bge();
    virtual void execute() const;
private:
};


#endif
