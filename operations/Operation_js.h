
#ifndef OPERATION_JS
#define OPERATION_JS

#include "AbstractOperation.h"

class Operation_js : public AbstractOperation {
public:
    Operation_js();
    virtual ~Operation_js();
    virtual void execute() const;
private:
};


#endif
