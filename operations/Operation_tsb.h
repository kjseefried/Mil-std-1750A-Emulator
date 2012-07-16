
#ifndef OPERATION_TSB
#define OPERATION_TSB

#include "AbstractOperation.h"

class Operation_tsb : public AbstractOperation {
public:
    Operation_tsb();
    virtual ~Operation_tsb();
    virtual void execute() const;
private:
};


#endif
