#include <iostream>

// Functions take user input
std::string getName()
{
    std::cout << "What is your name: " << std::endl;
    std::string name{};
    std::getline(std::cin >> std::ws, name);
    return name;
}

int getAge()
{
    std::cout << "What is your age: " << std::endl;
    int age{};
    std::cin >> age;
    return age;
}

// Functions print user input
void printName(std::string name)
{
    std::cout << name << " ";
}

void printAge(int age)
{
    std::cout << age;
}
