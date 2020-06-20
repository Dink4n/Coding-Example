#include <iostream>

using std::cout;using std::cin;using std::endl;
int main()
{
	int n, big, temp;
	cout<< "Enter the limit : ";
	cin >> n;
	cout<< "Enter the nums : ";
	cin >> big;
	
	for (int i = 1;i < n;i++){
		cin >> temp;
		if (big < temp){
			big = temp;
		}
	}
	cout << big;
	return 0;
}
