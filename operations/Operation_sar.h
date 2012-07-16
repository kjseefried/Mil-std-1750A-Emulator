
#ifndef OPERATION_SAR
#define OPERATION_SAR

#include "AbstractOperation.h"

class Operation_sar : public AbstractOperation {
public:
    Operation_sar();
    virtual ~Operation_sar();
    virtual void execute() const;
private:
};


#endif
