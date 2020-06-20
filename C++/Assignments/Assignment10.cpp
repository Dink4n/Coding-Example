#include <iostream>

int main()
{
    int year;
    std::cout << "Enter the year : "; std::cin >> year;
    if (year%100 == 0) {
        if (year%400 == 0) {
            std::cout << year << " is a leap year" << std::endl;
        } else {
            std::cout << year << " isn't a leap year" << std::endl;
        }
    } else if (year%4 == 0) {
        std::cout << year << " is a leap year" << std::endl;
    } else {
        std::cout << year << " isn't a leap year" << std::endl;
    }
    return 0;
}
