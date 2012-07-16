
#ifndef OPERATION_XOR
#define OPERATION_XOR

#include "AbstractOperation.h"

class Operation_xor : public AbstractOperation {
public:
    Operation_xor();
    virtual ~Operation_xor();
    virtual void execute() const;
private:
};


#endif
