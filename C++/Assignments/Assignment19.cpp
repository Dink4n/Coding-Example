#include <iostream>

int main()
{
    int num;
    std::cin >> num;
    for (int i = 1;i <= num;++i){
        for (int number = 1;number <= i;++number){
            std::cout << '*';
        }
        std::cout << "\n";
    }
    return 0;
}