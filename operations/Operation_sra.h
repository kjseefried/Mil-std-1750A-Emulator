
#ifndef OPERATION_SRA
#define OPERATION_SRA

#include "AbstractOperation.h"

class Operation_sra : public AbstractOperation {
public:
    Operation_sra();
    virtual ~Operation_sra();
    virtual void execute() const;
private:
};


#endif
