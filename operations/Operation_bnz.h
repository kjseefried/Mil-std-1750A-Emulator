
#ifndef OPERATION_BNZ
#define OPERATION_BNZ

#include "AbstractOperation.h"

class Operation_bnz : public AbstractOperation {
public:
    Operation_bnz();
    virtual ~Operation_bnz();
    virtual void execute() const;
private:
};


#endif
