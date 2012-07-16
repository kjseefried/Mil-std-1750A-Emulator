
#ifndef OPERATION_BEX
#define OPERATION_BEX

#include "AbstractOperation.h"

class Operation_bex : public AbstractOperation {
public:
    Operation_bex();
    virtual ~Operation_bex();
    virtual void execute() const;
private:
};


#endif
