#include <iostream>
// make program that tells user whether inputted number (between 0 and 9 inclusive)
// is prime or not
int userInput()
{
    std::cout << "Enter a single digit integer from 0-9: ";
    int x {};
    std::cin >> x;

    return x;
}

bool isPrime(int x)
{
    return x == 2 || x == 3 || x == 5 || x == 7;
}

int main()
{
    int num {userInput()};

    if (isPrime(num))
        std::cout << num << " is a prime!\n";
    else 
        std::cout << num << " is not a prime!\n";

    return 0;
}
