#ifndef TEST_HELPER
#define TEST_HELPER

#include <string>
#include <iostream>

class TestHelper
{
public:
  TestHelper(const std::string & testCase) : m_testCase(testCase), m_passes(0), m_failures(0) {}
  ~TestHelper() 
  {
    displayStatus();
  }

  template<class X, class Y>
  bool assert (unsigned int step, const X & value, const Y& expected)
  {
    if (value != expected)
    {
      m_failures++;
      std::cerr << "Test case: " << m_testCase << " failed at step: " << step << ". Expected = " << expected << ", actual = " << value << std::endl;
      return false;
    }
    m_passes++;
    return true;
  }

  void displayStatus()
  {
    std::cout << std::dec << "Test case: " << m_testCase << ". " << m_passes << " test steps passed, " << m_failures << " test steps failed." << std::endl; 
  }

private:
  std::string m_testCase;
  unsigned int m_passes;
  unsigned int m_failures;
};

#endif
