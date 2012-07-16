
#ifndef OPERATION_XBR
#define OPERATION_XBR 

#include "AbstractOperation.h"

class Operation_xbr : public AbstractOperation {
public:
    Operation_xbr();
    virtual ~Operation_xbr();
    virtual void execute() const;
private:
};


#endif
