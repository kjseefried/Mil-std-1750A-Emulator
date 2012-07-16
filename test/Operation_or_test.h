#ifndef OPERATION_OR_TEST
#define OPERATION_OR_TEST
#include "AbstractTestOperation.h"

class Operation_or_test : public AbstractTestOperation
{
public:
  Operation_or_test();
  virtual ~Operation_or_test();
  virtual bool testOperation() const;
protected:
  bool test_orr() const;
  bool test_orb() const;
  bool test_orbx() const;
  bool test_or() const;
  bool test_orim() const;
};


#endif
