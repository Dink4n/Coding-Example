#include <iostream>

int main()
{
    char user;double length,breadth;
    do 
    {
        std::cout << "Length : "; std::cin >> length;
        std::cout << "Breadth : "; std::cin >> breadth;
        std::cout << "The area of the rectangle : " << length * breadth << std::endl;
        std::cout << "do you want to continue ? [Y/N]"; std::cin >> user;
    }    while(toupper(user) != 'N');
    return 0;
}