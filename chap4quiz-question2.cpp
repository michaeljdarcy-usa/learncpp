#include <iostream>

/* Write the following program: The user is asked to enter 2 floating point numbers (use doubles). The user is then asked to enter one of the following mathematical symbols: +, -, *, or /. The program computes the answer on the two numbers the user entered and prints the results. If the user enters an invalid symbol, the program should print nothing. */

// Wite a function that asks the user for an integer (use doubles) and returns the inpue
double returnUserNumber()
{
    std::cout << "Enter a number: " << std::endl;
    double value{};
    std::cin >> value;
    return value;
}

// Asks the user for a math operator 
char returnUserMathOperator()
{
    std::cout << "Enter a math symbol (+, -, *, /): " << std::endl;
    char operation{};
    std::cin >> operation;
    return operation;
}

void calculateResult(double value1, char operation, double value2)
{
    double result{};

    switch(operation)
    {
        case '+':
            result = value1 + value2;
            break;
        case '-':
            result = value1 - value2;
            break;
        case '*':
            result = value1 * value2;
            break;
        case '/':
            result = value1 * value2;
            break;
        default:
            std::cout << "Invalid operator." << std::endl;
            return;
    }

    std::cout << value1 << " " << operation << " " << value2 << " is " << result << std::endl;
}

int main()
{
    double value1{returnUserNumber()};
    double value2{returnUserNumber()};
    char operation{returnUserMathOperator()};

    calculateResult(value1, operation, value2);

    return 0;
}
