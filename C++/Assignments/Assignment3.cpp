#include <iostream>
using namespace std;

int main()
{
    int length,breadth;
    cout << "Length: "; cin >> length;
    cout << "Breadth: "; cin >> breadth;
    cout << "Perimeter: " << (length + breadth) * 2 << endl;
    cout << "Area: " << length * breadth << endl;
    return 0;
}
