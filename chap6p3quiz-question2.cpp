#include <iostream>
#include "my_functions_chap6.h"

int main(int argc, char* argv[])
{
    std::cout << "Enter an integer: " << std::endl;
    int num{};
    std::cin >> num;

    if (isEven(num))
    {
        std::cout << "The number is even.\n";
    }
    else
    {
        std::cout << "The number is odd.\n";
    }

    return 0;
}
