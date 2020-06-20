#include <iostream>

using std::cout; using std::endl; using std::cin;
int main()
{
	int num1,num2;
	cout << "Enter number 1 : "; cin >> num1;
	cout << "Enter number 2 : "; cin >> num2;
	num1 > num2 ? cout << num1 << " is bigger" << endl: cout << num1 << " =< " << num2 << endl; 
	return 0;
}