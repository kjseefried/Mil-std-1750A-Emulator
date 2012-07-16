
#ifndef OPERATION_BR
#define OPERATION_BR

#include "AbstractOperation.h"

class Operation_br : public AbstractOperation {
public:
    Operation_br();
    virtual ~Operation_br();
    virtual void execute() const;
private:
};


#endif
