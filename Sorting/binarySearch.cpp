#include <iostream>

int main()
{
    int list[10] = {1,2,3,4,5,6,7,8,9,10}, num = 10, low = 0, high = 9,mid;
    while (low <= high){
        mid = low + (high - low) / 2;
        if (list[mid] == num){
            std::cout << "The number's position is " << mid << std::endl;
            break;
        } else if (num > mid){
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    if (high < low){
        std::cout << "The you've searched for is not in this list :(" << std::endl;
    }
}

