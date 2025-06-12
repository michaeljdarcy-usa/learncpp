#include <iostream>

std::string getName()
{
    std::cout << "What is your name: " << std::endl;
    std::string name{};
    std::getline(std::cin >> std::ws, name);
    return name;
}

void printName(std::string name)
{
    std::cout << name << " ";
}
