
#ifndef OPERATION_EFM
#define OPERATION_EFM

#include "AbstractOperation.h"

class Operation_efm : public AbstractOperation {
public:
    Operation_efm();
    virtual ~Operation_efm();
    virtual void execute() const;
private:
};


#endif
