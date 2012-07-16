
#ifndef OPERATION_DSCR
#define OPERATION_DSCR

#include "AbstractOperation.h"

class Operation_dscr : public AbstractOperation {
public:
    Operation_dscr();
    virtual ~Operation_dscr();
    virtual void execute() const;
private:
};


#endif
