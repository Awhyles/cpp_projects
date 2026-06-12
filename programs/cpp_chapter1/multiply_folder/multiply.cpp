#include <iostream>

int main()
{
    int num{};

    std::cout << "Enter an integer: ";
    std::cin >> num;
    std::cout << "Your number multiplied by 2 is: " << num * 2 << "\n";
    std::cout << "Your number multiplied by 3 is: " << num * 3 << "\n";

    return 0;
}
