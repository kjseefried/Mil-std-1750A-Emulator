
#ifndef OPERATION_STC
#define OPERATION_STC

#include "AbstractOperation.h"

class Operation_stc : public AbstractOperation {
public:
    Operation_stc();
    virtual ~Operation_stc();
    virtual void execute() const;
private:
};


#endif
