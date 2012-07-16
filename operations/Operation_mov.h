
#ifndef OPERATION_MOV
#define OPERATION_MOV

#include "AbstractOperation.h"

class Operation_mov : public AbstractOperation {
public:
    Operation_mov();
    virtual ~Operation_mov();
    virtual void execute() const;
private:
};


#endif
