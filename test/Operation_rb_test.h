#ifndef OPERATION_RB_TEST
#define OPERATION_RB_TEST
#include "AbstractTestOperation.h"

class Operation_rb_test : public AbstractTestOperation
{
public:
  Operation_rb_test();
  virtual ~Operation_rb_test();
  virtual bool testOperation() const;
protected:
  bool test_rbr() const;
  bool test_rb() const;
  bool test_rbi() const;
};


#endif
