#include <iostream>

int main()
{
    int num,factorial;
    std::cin >> num;
    factorial = 1;
    for (int i = 1; i <= num;++i){
        factorial *= i;
    }
    std::cout << factorial << std::endl;
}