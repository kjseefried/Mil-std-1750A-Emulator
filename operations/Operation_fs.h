
#ifndef OPERATION_FS
#define OPERATION_FS

#include "AbstractOperation.h"

class Operation_fs : public AbstractOperation {
public:
    Operation_fs();
    virtual ~Operation_fs();
    virtual void execute() const;
private:
};


#endif
