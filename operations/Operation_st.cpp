
#include "Operation_st.h"

namespace {
  const std::string opName = "ST";
}

Operation_st::Operation_st() :
AbstractOperation(opName)
{

}
Operation_st::~Operation_st()
{
}


void Operation_st::execute() const
{
  *m_rightArg = *m_leftArg;
}
