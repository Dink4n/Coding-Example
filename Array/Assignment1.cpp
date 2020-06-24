#include <iostream>

int main()
{
    int score[5];
    for (int i = 1;i <= 5;i++){
        std::cin >> score[i];
    }
    std::cout << "reverse order" << std::endl;
    for (int num = 1;num <= 5;num++){
        std::cout << score[num+(num-1)];
    }
}
