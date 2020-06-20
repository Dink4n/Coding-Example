#include <iostream>

int main()
{
    int fib,presum = 0,newsum = 1,sum;
    std::cin >> fib;
    std::cout << presum;
    for (int i = 0; i < fib; i++)
    {
        sum = presum + newsum;
        presum = newsum;
        newsum = sum;
        std::cout << sum;
        // std::cout << i+i-1;
        // std::cout << fib+(fib-1) << ',';
    }
    
    return 0;
}