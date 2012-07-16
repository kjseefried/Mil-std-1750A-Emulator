
#ifndef OPERATION_SJS
#define OPERATION_SJS

#include "AbstractOperation.h"

class Operation_sjs : public AbstractOperation {
public:
    Operation_sjs();
    virtual ~Operation_sjs();
    virtual void execute() const;
private:
};


#endif
