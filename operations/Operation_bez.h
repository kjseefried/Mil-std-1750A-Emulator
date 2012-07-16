
#ifndef OPERATION_BEZ
#define OPERATION_BEZ

#include "AbstractOperation.h"

class Operation_bez : public AbstractOperation {
public:
    Operation_bez();
    virtual ~Operation_bez();
    virtual void execute() const;
private:
};


#endif
