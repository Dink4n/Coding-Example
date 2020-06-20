#include <iostream>

using std::cout; using std::cin; using std::endl;
int main()
{
    int even = 0;
    for (int i = 1; i <= 20; ++i){
        if (i%2 == 0){
            even += i;
        }
    }
    cout << even << endl;
    return 0;
}
