#include <iostream>

int main()
{
    int score[5];
    for (int i = 0;i < 5;i++){
        std::cin >> score[i];
    }
    std::cout << "reverse order" << std::endl;
    for (int num = 0;num < 5;num++){
        std::cout << score[4-num] << std::endl;
    }
}
