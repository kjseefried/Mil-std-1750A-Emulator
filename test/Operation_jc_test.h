#ifndef OPERATION_JC_TEST
#define OPERATION_JC_TEST
#include "AbstractTestOperation.h"

class Operation_jc_test : public AbstractTestOperation
{
public:
  Operation_jc_test();
  virtual ~Operation_jc_test();
  virtual bool testOperation() const;
protected:
  bool test_jc() const;
  bool test_jci() const;
};


#endif
