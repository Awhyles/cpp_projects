#include <iostream>
//The user is asked to enter 2 floating point numbers (use doubles). The user is then asked to enter one of the
//following mathematical symbols: +, -, *, or /.
//The program computes the answer on the two numbers the user entered and prints the results. 
//If the user enters an invalid symbol, the program should print nothing. - but I wanna print "Invalid symbol!"

double numInput() //Returns user input for number so it can be used in a calculation
{
    std::cout << "Enter a number: ";
    double num {};
    std::cin >> num;

    return num;
}

char symbolInput() //Returns user input for a symbol, the one that will decide which calculation is done
{
    std::cout << "Enter one of +, -, /, or * : ";
    char sym {};
    std::cin >> sym;

    return sym;
}


int main()
{

    double numAns1 {numInput()};
    double numAns2 {numInput()};
    char symAns {symbolInput()};


    if (symAns == '-')  
        std::cout << numAns1 << " " << symAns << " " << numAns2 << " is: " << numAns1 - numAns2;
    else if (symAns == '+')
        std::cout << numAns1 << " " << symAns << " " << numAns2 << " is: " << numAns1 + numAns2;
    else if (symAns == '/')
        std::cout << numAns1 << " " << symAns << " " << numAns2 << " is: " << numAns1 / numAns2;
    else if (symAns == '*')
        std::cout << numAns1 << " " << symAns << " " << numAns2 << " is: " << numAns1 * numAns2;
    else
        std::cout << "Invalid symbol!\n";


    return 0;
}
