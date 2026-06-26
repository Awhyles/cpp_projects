#include <iostream>
//Write a short program to simulate a ball being dropped off of a tower. 
//To start, the user should be asked for the height of the tower in meters. 
//Assume normal gravity (9.8 m/s2), and that the ball has no initial velocity (the ball is not moving to start). 
//Have the program output the height of the ball above the ground after 0, 1, 2, 3, 4, and 5 seconds. 
//The ball should not go underneath the ground (height 0).

double inputHeight()
{
    std::cout << "Input tower height (metres): ";
    int height {};
    std::cin >> height;

    return height;
}

double calc(int calcTime)

{
    return 9.8 * (calcTime * calcTime) / 2;
}

void calcOutput(int ballTime, double ballHeight)
{
    if (ballHeight > 0)
        std::cout << "At " << ballTime << " seconds, the ball is at height: " << ballHeight << "\n";
    else
        std::cout << "At " << ballTime << " seconds, the ball is on the ground.\n";
}

int main()
{
    double height = {inputHeight()};
    calcOutput(0, 100);
    calcOutput(1, height - calc(1));
    calcOutput(2, height - calc(2));
    calcOutput(3, height - calc(3));
    calcOutput(4, height - calc(4));
    calcOutput(5, height - calc(5));


    return 0;
}
