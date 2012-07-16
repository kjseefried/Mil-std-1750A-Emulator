
#ifndef OPERATION_POPM
#define OPERATION_POPM

#include "AbstractOperation.h"

class Operation_popm : public AbstractOperation {
public:
    Operation_popm();
    virtual ~Operation_popm();
    virtual void execute() const;
private:
};


#endif
