#pragma once
#include <string>
#include <unordered_map>

class Romans
{
  public:
    Romans();
    Romans(const std::string &romans);
    Romans(const int &integer);

    std::string convert(int number);
    int convert(const std::string &number);
  
    size_t digist_count(int number);
    int which_digit_is_it(int number);
    int part_of_num(int digit, int pos);

    const std::string &getRomans();
    void setRomans(const std::string &romans);

    const int &getInteger();
    void setInteger(const int &integer);

  private:
    std::string m_romans;
    int m_integer = 0;

    std::unordered_map<int, std::string> m_table = {
      {1, "I"},
      {2, "II"},
      {3, "III"},
      {4, "IV"},
      {5, "V"},
      {6, "VI"},
      {7, "VII"},
      {8, "VIII"},
      {9, "IX"},
      {10, "X"},
      {20, "XX"},
      {30, "XXX"},
      {40, "XL"},
      {50, "L"},
      {60, "LX"},
      {70, "LXX"},
      {80, "LXXX"},
      {90, "XC"},
      {100, "C"},
      {200, "CC"},
      {300, "CCC"},
      {400, "CD"},
      {500, "D"},
      {600, "DC"},
      {700, "DCC"},
      {800, "DCCC"},
      {900, "CM"},
      {1000, "M"},
      {2000, "MM"},
      {3000, "MMM"}};
};
