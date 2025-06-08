/* Write a program that asks the user to enter their full name and their age. As output, tell the user the sum of their age and the number of characters in their name (use the std::string::length() member function to get the length of the string). For simplicity, count any spaces in the name as a character. */

#include <iostream>
#include <string>

int main(int argc, char * argv[])
{
    std::cout << "Enter your full name: " << std::endl;
    std::string name{};
    std::getline(std::cin >> std::ws, name);

    std::cout << "Enter your age: " << std::endl;
    int age{};
    std::cin >> age;

    //std::cout << name << " " << age;

    int nameLength{static_cast<int>(name.length())};
    std::cout << "Your age + length of name is: " << nameLength << "\n";

    return 0;
}
