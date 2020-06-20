#include <iostream>
using namespace std;

int main()
{
    int mark;
    char grade;
    cout << "What is your mark : "; cin >> mark;
    if (mark > 79) {
        grade = 'A';
    } else if (mark > 59) {
        grade = 'B';
    } else if (mark > 39) {
        grade = 'C';
    } else if (mark > 29) {
        grade = 'D';
    } else if (mark > 19) {
        grade = 'E';
    } else {
        grade = 'F';
    }
    if (grade != 'F') {
        cout << "Your grade is : " << grade << endl;
    } else {
        cout << "You Failed dude" << endl;
    }

    return 0;
}
