#include <iostream>
using namespace std;

int main()
{
    int celsius;
    cout << "Celsius: "; cin >> celsius;
    cout << "Fahrenheit: " << (celsius * 9/5) + 32 << endl;
    return 0;
}
