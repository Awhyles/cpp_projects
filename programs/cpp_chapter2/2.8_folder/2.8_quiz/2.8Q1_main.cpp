#include <iostream>

//This program calls to the 2.8Q1_input file also in the 2.8_quiz folder.
//It takes the function getInteger() from that code and applies it here to add 2 numbers 
// (x and y) inputted by the user

int getInteger();

int main()
{
    int x {getInteger()};
    int y {getInteger()};

    std::cout << x << " + " << y << " is " << x + y << "\n";

    return 0;
}
