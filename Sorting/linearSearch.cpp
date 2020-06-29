#include <iostream>

int main()
{
    int list[10] = {10,9,8,7,6,5,4,3,2,1}, num = 7, pos;
    for(int i = 0;i < 10;i++){
        if(num == list[i]){
            pos = i;
            break;
        }
    }
    std::cout << pos;
}
