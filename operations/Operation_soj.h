
#ifndef OPERATION_SOJ
#define OPERATION_SOJ

#include "AbstractOperation.h"

class Operation_soj : public AbstractOperation {
public:
    Operation_soj();
    virtual ~Operation_soj();
    virtual void execute() const;
private:
};


#endif
