#include <iostream>
#include "2.x_io.h"

int main()
{
    int answer{readNumber()};
    int answer2{readNumber()};

    std::cout << answer << " + " << answer2 << " = " << answer + answer2 << "\n";

    return 0;
}
