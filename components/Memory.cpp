#include "Memory.h"
#include <fstream>
#include <iostream>
#include <iomanip>
#include <sstream>
#include <list>

Memory::Memory() :
m_data(0),
m_size(0)
{
}

Memory::~Memory()
{
  if (!m_data)
  {
    delete [] m_data;
    m_data = 0;
    m_size = 0;
  }
}
void Memory::initialize(unsigned int size)
{
  if (!m_data) {
    delete [] m_data;
  }
  m_data = new Value_i16 [size];
  m_size = size;
}

void Memory::dump(const std::string & file) const
{
  dump(file, 0, m_size);
}
void Memory::dump(const std::string & file, unsigned int start, unsigned int end) const
{
  std::ofstream out(file.c_str());

  if (!out.is_open()) {
    return;
  }
  const unsigned int rowSize = 16;

  unsigned int size = end - start;
  unsigned int lines = size /rowSize;

  for (unsigned int line = 0; line < lines ; line++)
  {
    out << std::hex << std::uppercase << std::setfill('0') << std::setw(8) << line*rowSize << "  :  " ;
    for (unsigned int i = 0 ; i < rowSize ; i++) 
    {
      out << std::hex << std::uppercase << std::setfill('0') << std::setw(4) << m_data[start + line*rowSize + i] << " ";
    }
    out << std::endl; 
  }

  if (rowSize * lines < size)
  {
    out << std::hex << std::uppercase << std::setfill('0') << std::setw(8) << lines * rowSize << "  :  ";
  }
  for (unsigned int i = rowSize * lines; i < size; i++)
  {
    out << std::hex << std::uppercase << std::setfill('0') << std::setw(4) << m_data[i] << " ";
  }
  out.close();
}

void Memory::initializeFromFile(const std::string & file, unsigned int size)
{
  initialize(size);
 
  std::ifstream in(file.c_str());

  if (!in.is_open()) {
    return;
  }
  std::string line;
  unsigned int address = 0;
  while (std::getline(in, line))
  {
    if (line[0] == '#')
    {
      continue;
    }
    else if ( (line.size() % 4) != 0)
    {
      std::cerr << "Memory line with not complete number of data words. Ignoring." << std::endl;
      continue;
    }
    unsigned int words = line.size() / 4;
    for (unsigned int word = 0 ; word < words ; word++)
    {
      std::string word_str = line.substr(word * 4, 4);
      std::istringstream iS(word_str);
      unsigned short int i;
      iS >> std::hex >> i;

      if (address < m_size) m_data[address++] = i;
    }      
  }
  in.close();
}
