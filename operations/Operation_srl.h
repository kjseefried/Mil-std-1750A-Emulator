
#ifndef OPERATION_SRL
#define OPERATION_SRL

#include "AbstractOperation.h"

class Operation_srl : public AbstractOperation {
public:
    Operation_srl();
    virtual ~Operation_srl();
    virtual void execute() const;
private:
};


#endif
