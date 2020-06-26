#include <iostream>

int main()
{
    int score[10] = {1,2,3,4,5};
    char code[10] = {'a','b','c','d','e'};
    float wgpa[10] = {1.0,2.1,3.2,4.3,5.4};
    int num[] = {1,2};
    for (int i = 0;i < 10;i++){
	std::cout << score[i] << std::endl;
	std::cout << code[i]<< std::endl;
	std::cout << wgpa[i]<< std::endl;
	std::cout << num[i] << std::endl;
   }
}
