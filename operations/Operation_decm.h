
#ifndef OPERATION_DECM
#define OPERATION_DECM

#include "AbstractOperation.h"

class Operation_decm : public AbstractOperation {
public:
    Operation_decm();
    virtual ~Operation_decm();
    virtual void execute() const;
private:
};


#endif
