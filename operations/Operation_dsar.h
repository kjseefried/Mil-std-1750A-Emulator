
#ifndef OPERATION_DSAR
#define OPERATION_DSAR

#include "AbstractOperation.h"

class Operation_dsar : public AbstractOperation {
public:
    Operation_dsar();
    virtual ~Operation_dsar();
    virtual void execute() const;
private:
};


#endif
