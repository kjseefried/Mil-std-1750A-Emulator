
#ifndef OPERATION_STM
#define OPERATION_STM

#include "AbstractOperation.h"

class Operation_stm : public AbstractOperation {
public:
    Operation_stm();
    virtual ~Operation_stm();
    virtual void execute() const;
private:
};


#endif
