#include <iostream>
#include <string>

#include "romans.h"

int main()
{
    std::cout << "Hi!\n";

    int inum;
    std::cout << "Enter number: ";
    std::cin >> inum;
    if(inum < 0) 
    {
      std::cout << "Number should be positive!\n";
      return 1;
    }
    else if(inum > 3999)
    {
      std::cout << "Number should less or equal to 3999!\n";
      return 1;
    }

    Romans roms;
    std::string romnum = roms.convert(inum);
    std::cout << "romnum = " << romnum << "\n";

    return 0;   
}
