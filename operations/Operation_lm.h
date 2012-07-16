
#ifndef OPERATION_LM
#define OPERATION_LM

#include "AbstractOperation.h"

class Operation_lm : public AbstractOperation {
public:
    Operation_lm();
    virtual ~Operation_lm();
    virtual void execute() const;
private:
};


#endif
