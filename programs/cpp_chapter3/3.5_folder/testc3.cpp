#include <spdlog/spdlog.h>
#include <iostream>

int getUserInput()
{
    spdlog::debug("getUserInput() called");

    std::cout << "Enter a number: ";
    int x{};
    std::cin >> x;
    return x;
}

int main()
{
//    spdlog::set_level(spdlog::level::off);
    spdlog::set_level(spdlog::level::debug); // Enable debug messages

    spdlog::debug("main() called");

    int x{ getUserInput() };
    std::cout << "You entered: " << x << '\n';

    return 0;
}
