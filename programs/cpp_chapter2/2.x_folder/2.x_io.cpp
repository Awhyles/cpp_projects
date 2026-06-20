#include <iostream>
#include "2.x_io.h"

int readNumber()
{
    //get user input for a single integer
    int x{};

    std::cout << "Enter an integer: ";

    std::cin >> x;

    return x;
}

void writeAnswer(int value)
{
    //output the answer -> that being the two inputted integers added together
    //should  take 1 parameter and have no return value

    std::cout << value;
}
