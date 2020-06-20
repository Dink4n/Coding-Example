#include <iostream>
using namespace std;

int main()
{
    char alpha;
    cin >> alpha;
    if (alpha >= 'a' && alpha <= 'z') {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
