#ifndef OPERATION_SB_TEST
#define OPERATION_SB_TEST
#include "AbstractTestOperation.h"

class Operation_sb_test : public AbstractTestOperation
{
public:
  Operation_sb_test();
  virtual ~Operation_sb_test();
  virtual bool testOperation() const;
protected:
  bool test_sbr() const;
  bool test_sb() const;
  bool test_sbi() const;
};


#endif
