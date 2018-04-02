#include "romans.h"

#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

Romans::Romans() {}

Romans::Romans(const std::string &romans)
  : m_romans(romans)
{
}

Romans::Romans(const int &integer)
  : m_integer(integer)
{
}

std::string Romans::convert(int number)
{
  std::string roman;
  auto copyof {number};
  auto count {digist_count(number)};
  int pos = 1;
  
  int digit {0};
  while(pos <= count)
  {
    digit = copyof % 10;
    copyof /= 10;
    roman += m_table[part];
    ++pos;
  }

  std::reverse(roman.begin(), roman.end());
  return roman;
}

int Romans::part_of_num(int digit, int pos)
{
  return digit * pow(10, pos - 1);
}

int Romans::convert(const std::string &number)
{
  int integer {0};

  return integer;
}

size_t Romans::digist_count(int number)
{
  size_t count = 0;
  while(number > 0)
  {
    ++count;
    number /= 10;
  }
  return count;
}

int Romans::which_digit_is_it(int number)
{
  if(number == 9) return 9;
  else if(number == 8) return 8;
  else if(number == 7) return 7;
  else if(number == 6) return 6;
  else if(number == 5) return 5;
  else if(number == 4) return 4;
  else if(number == 3) return 3;
  else if(number == 2) return 2;
  else if(number == 1) return 1;
  else return 0;
}

const std::string &Romans::getRomans()
{
  return m_romans;
}

void Romans::setRomans(const std::string &romans)
{
  m_romans = romans;
}

const int &Romans::getInteger()
{
  return m_integer;
}

void Romans::setInteger(const int &integer)
{
  m_integer = integer;
}
