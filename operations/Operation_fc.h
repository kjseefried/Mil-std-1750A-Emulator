
#ifndef OPERATION_FC
#define OPERATION_FC 

#include "AbstractOperation.h"

class Operation_fc : public AbstractOperation {
public:
    Operation_fc();
    virtual ~Operation_fc();
    virtual void execute() const;
private:
};


#endif
