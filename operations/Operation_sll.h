
#ifndef OPERATION_SLL
#define OPERATION_SLL

#include "AbstractOperation.h"

class Operation_sll : public AbstractOperation {
public:
    Operation_sll();
    virtual ~Operation_sll();
    virtual void execute() const;
private:
};


#endif
