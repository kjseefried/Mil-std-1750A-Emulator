
#ifndef OPERATION_BLE
#define OPERATION_BLE

#include "AbstractOperation.h"

class Operation_ble : public AbstractOperation {
public:
    Operation_ble();
    virtual ~Operation_ble();
    virtual void execute() const;
private:
};


#endif
