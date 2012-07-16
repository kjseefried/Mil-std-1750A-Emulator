
#ifndef OPERATION_SCR
#define OPERATION_SCR

#include "AbstractOperation.h"

class Operation_scr : public AbstractOperation {
public:
    Operation_scr();
    virtual ~Operation_scr();
    virtual void execute() const;
private:
};


#endif
