
#ifndef MEMORY
#define MEMORY 

#include <Value_i16.h>
#include <string>

class Memory {

public:
    Memory();
    virtual ~Memory();

    bool good() const {return m_size > 0;}
    

    inline const Value_i16 & read(const Value_i16 & address) const
    {
      return m_data[address.uvalue()];
    }
    inline Value_i16 & readRef(const Value_i16 & address) const
    {
      return m_data[address.uvalue()];
    }
    inline bool write(const Value_i16 & address, const Value_i16 & data)
    {
      if (address.uvalue() < m_size)
      {
        m_data[address.uvalue()] = data;
        return true;
      }
      return false;
    }

    void initialize(unsigned int size);
    void initializeFromFile(const std::string & file, unsigned int size);
    void dump(const std::string & file) const;
    void dump(const std::string & file, unsigned int start, unsigned int end) const;

protected:

private:

    Value_i16 * m_data;
    unsigned int m_size;
};


#endif
