#include "my_functions_chap5.h"
#include <iostream>

int main(int argc, char* argv[])
{
    std::string name1{getName()};
    int age1{getAge()};

    std::string name2{getName()};
    int age2{getAge()};

    printName(name1);
    printAge(age1);
    std::cout << "\n";
    printName(name2);
    printAge(age2);

    return 0; 
}
