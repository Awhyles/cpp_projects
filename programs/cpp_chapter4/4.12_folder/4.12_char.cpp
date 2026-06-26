#include <iostream>
//Write a short program where the user is asked to enter a single character. 
//Print the value of the character and its ASCII code, using static_cast.

int userInput()
{
    std::cout << "Enter a character: ";
    char input {};
    std::cin >> input;

    return input;
}

void printChar(char ch)
{
    std::cout << "Your character is: " << ch << "\n";
    std::cout << "It has the ASCII value: " << static_cast<int>(ch);
}

int main()
{
    int result {userInput()};
    printChar(result);

    return 0;
}
