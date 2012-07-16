
#ifndef OPERATION_LST
#define OPERATION_LST

#include "AbstractOperation.h"

class Operation_lst : public AbstractOperation {
public:
    Operation_lst();
    virtual ~Operation_lst();
    virtual void execute() const;
private:
};


#endif
