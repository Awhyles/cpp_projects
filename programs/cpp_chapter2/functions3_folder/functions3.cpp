#include <iostream>

int add(int x, int y)
{
    return x + y;
}

// int multiply(int z, int w)
// {
//     return z * w;
// }

int main()
{
    // std::cout << add(4, 5) << '\n'; // within add() x=4, y=5, so x+y=9

    
    // std::cout << add(1 + 2, 3 * 4) << '\n'; // within add() x=3, y=12, so x+y=15

    int a, b{};
    
    std::cout << "enter 2 numbers to add together: ";
    std::cin >> a;
    std::cin >> b;
    std::cout << add(a, b) << '\n'; 

    // std::cout << add(1, multiply(2, 3)) << '\n'; // evaluates 1 + (2 * 3)
    // std::cout << add(1, add(2, 3)) << '\n'; // evaluates 1 + (2 + 3)

    return 0;
}
