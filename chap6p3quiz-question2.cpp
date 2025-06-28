#include <iostream>

// Write a constexpr function called isEven() that returns true if an integer passed to it is even, and false otherwise.
constexpr bool isEven(int x)
{
    return (x % 2) == 0;
}

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
