#include <iostream>
#include <cmath>

void primeFinder();

int main()
{
    primeFinder();
    std::cout << sizeof(unsigned long long);
    return 0;
}

void primeFinder()
{
    bool prime = true;
    unsigned long long num;
    std::cout << "Enter Number: "; std::cin >> num;
    for (int i = 2;i < sqrt(num); i++){
        int x = num%i;
        if (x == 0){
            prime = false;
        }
    }
    if (prime){
        std::cout << num << " is a prime number" << std::endl;
    } else {
        std::cout << num << " is not a prime number" << std::endl;
    }
}
