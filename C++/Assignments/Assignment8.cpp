#include <iostream>
using namespace std;

int main()
{
    double kid1,kid2;
    cout << "Enter the first kid's height: "; cin >> kid1;
    cout << "Enter the second kid's height: "; cin >> kid2;
    if (kid1 > kid2) {
        cout << "The kid with height " << kid1 << " is taller" << endl;
    } else if (kid2 > kid1) {
        cout << "The kid with height " << kid2 << " is taller" << endl;
    } else {
        std::cout << "Both kid's height are equal" << '\n';
    }
    return 0;
}
