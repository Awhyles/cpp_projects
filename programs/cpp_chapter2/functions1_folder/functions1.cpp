// This program doesn't work
#include <iostream>

int getValueFromUser()
{
 	std::cout << "Enter an integer: ";
	int input{};
	std::cin >> input;

    return input;
}

int main()
{
	int num{ getValueFromUser() }; // How do we get the value from getValueFromUser() and use it to initialize this variable?

	std::cout << num << " doubled is: " << num * 2 << '\n';

	return 0;
}
