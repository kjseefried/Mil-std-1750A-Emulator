#ifndef OPERATION_TB_TEST
#define OPERATION_TB_TEST
#include "AbstractTestOperation.h"

class Operation_tb_test : public AbstractTestOperation
{
public:
  Operation_tb_test();
  virtual ~Operation_tb_test();
  virtual bool testOperation() const;
protected:
  bool test_tbr() const;
  bool test_tb() const;
  bool test_tbi() const;
};


#endif
