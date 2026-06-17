#include <iostream>

int doubleNum(int x)
{
    return x * 2;
}

int main()
{
    int num{};
    std::cout << "Enter a number to be doubled: ";
    std::cin >> num;
    std::cout << "Double your number is: " << doubleNum(num) << "\n";

    return 0;
}
