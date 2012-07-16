
#ifndef INTERRUPT_GENERATOR
#define INTERRUPT_GENERATOR 

#include "Value_i16.h"

class InterruptGenerator {

public:
    InterruptGenerator();
    virtual ~InterruptGenerator();

    void addInterrupt(unsigned short int interrupt);

protected:

    short int highestPriority() const;
    void sendInterrupt() const;

private:
};


#endif
