
#ifndef OPERATION_ST
#define OPERATION_ST

#include "AbstractOperation.h"

class Operation_st : public AbstractOperation {
public:
    Operation_st();
    virtual ~Operation_st();
    virtual void execute() const;
private:
};


#endif
