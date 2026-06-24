#include <iostream>

int userInput()
{
    std::cout << "Enter a number: ";
    float num {};
    std::cin >> num;

    return num;
}

int add(int answer_a, int answer_2_a)
{
    return answer_a + answer_2_a;
}

int subtract(int answer_s, int answer_2_s)
{
    return answer_s - answer_2_s;
}

float divide(float answer_d, float answer_2_d)
{
    return answer_d / answer_2_d;
}

int multiply(int answer_m, int answer_2_m)
{
    return answer_m * answer_2_m;
}


int main()
{
    int answer {userInput()};
    int answer_2 {userInput()};

    std::cout << answer << " + " << answer_2 << " is " << add(answer, answer_2) << "\n";
    std::cout << answer << " - " << answer_2 << " is " << subtract(answer, answer_2) << "\n";
    std::cout << answer << " / " << answer_2 << " is " << divide(answer, answer_2) << "\n";
    std::cout << answer << " * " << answer_2 << " is " << multiply(answer, answer_2) << "\n";

    return 0;
}
