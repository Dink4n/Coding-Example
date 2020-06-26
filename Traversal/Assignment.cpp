#include <iostream>

int main()
{
	int traversal[10];
    for(int i = 0;i < 10;i++){
        std::cin >> traversal[i];
        traversal[i] += 1;
    }
    std::cout << "The reborn array" << std::endl;
    for(int num = 0;num < 10;num++){
    std::cout << traversal[num] << std::endl;
    }
}

