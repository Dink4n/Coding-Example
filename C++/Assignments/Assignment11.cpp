#include <iostream>

using std::cout; using std::endl; using std::cin;
void print(std::string message)
{
    cout << message;
}
int main()
{
    // enum day { Sunday = "Sunday",Monday,Tuesday,Wednesday,Thursday,Friday,Saturday };
    // day num;
    // std::cout << "Enter the day number"; std::cin >> num;
    int num; print("Enter the day number : "); cin >> num;
    switch (num){
        case 0 : print("Sunday\n"); break;
        case 1 : print("Monday\n"); break;
        case 2 : print("Tuesday\n"); break;
        case 3 : print("Wednesday\n"); break;
        case 4 : print("Thursday\n"); break;
        case 5 : print("Friday\n"); break;
        case 6 : print("Saturday\n"); break;
    }
    return 0;
}
