#include <iostream>

int main()
{
    int num;
    std::cout << "Enter the number of the day : "; std::cin >> num;
    switch (num) {
        case 0 : std::cout << "Sunday" << std::endl;
                 break;
        case 1 : std::cout << "Monday" << std::endl;
                 break;
        case 2 : std::cout << "Tuesday" << std::endl;
                 break;
        case 3 : std::cout << "Wednesday" << std::endl;
                 break;
        case 4 : std::cout << "Thursday" << std::endl;
                 break;
        case 5 : std::cout << "Friday" << std::endl;
                 break;
        case 6 : std::cout << "Saturday" << std::endl;
                 break;
        default : std::cout << "That's not a day dude" << std::endl;
    }
    return 0;
}
