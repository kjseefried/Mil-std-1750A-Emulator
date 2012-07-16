
#ifndef OPERATION_XIO
#define OPERATION_XIO


#include "AbstractOperation.h"

class Operation_xio : public AbstractOperation {
typedef void (Operation_xio::*ptXioFunction)() const;
public:
    Operation_xio();
    virtual ~Operation_xio();
    virtual void execute() const;
protected:
    ptXioFunction m_20Functions[16];
    ptXioFunction m_A0Functions[16];
    void setInterruptMask() const;
    void clearInterrupts()const;
    void enableInterrupts() const;
    void disableInterrupts() const;
    void resetPendingInterrupts() const;
    void setPendingInterruptRegister()  const;
    void writeStatusWord() const; 
    void outputDiscretes() const; 
    void doNothing() const {}
    void readInterruptMask() const; 
    void readPendingInterruptRegister() const; 
    void readStatusWord() const; 
    void readClearFaultRegister() const; 
private:
};


#endif
