
#ifndef REGISTER_BANK
#define REGISTER_BANK

#include "Register.h"
#include <iostream>
#include <iomanip>

template<unsigned int N, unsigned int M>
class RegisterBank {
friend class ComponentRegistry;

public:
    RegisterBank()
    {
      for (unsigned int i = M; i < N + M; i++)
      {
        m_registers[i] = new Register();
      }
      for (unsigned int i = N + M; i < N + 2 * M ; i++)
      {
        m_registers[i] = m_registers[i - N - 1];
      }
      for (unsigned int i = 0; i < M; i++)
      {
        m_registers[i] = m_registers[i + N + 1];
      }
      m_firstRegister = m_registers + M;

      // Set up index register
      m_indexRegisters[0] = new Register();
      for (unsigned int i = M + 1; i < N + M; i++)
      {
        m_indexRegisters[i - M] = m_registers[i];
      }
      m_firstIndexRegister = m_indexRegisters;
    }
    virtual ~RegisterBank()
    {
      for (unsigned int i = M; i < N + M; i++)
      {
        delete m_registers[i];
      }
      delete m_indexRegisters[0];
    }
 
    inline Register** start() const 
    {
      return m_firstRegister;
    }
    inline Register** index() const 
    {
      return m_firstIndexRegister;
    }

    void dumpRegisters() const
    {
        for (unsigned int i = M; i < M + N; i++)
        {
          std::cout << std::hex << std::uppercase << std::setfill('0') << std::setw(2) << std::right <<(0xFF & (i - M)) << "(" << std::setw(4) << m_registers[i]->value() << "), ";
        }
        std::cout << std::endl;
    }

protected:

private:
    Register ** m_firstRegister; 
    Register ** m_firstIndexRegister; 
    Register * m_registers[N + 2 * M];
    Register * m_indexRegisters[N];

    RegisterBank(const Register &);
    RegisterBank & operator=(const Register &);
};


#endif
