#include <bits/stdc++.h>

using std::cout; using std::endl; using std::cin;
int main()
{
	char vowel;
	cout << "Enter the character : "; cin >> vowel;
	switch (tolower(vowel)) {
	case 'a' :  
	case 'e' :
	case 'i' :
	case 'o' :
	case 'u' : cout << vowel << " is a vowel" << endl; break;
	default : cout << vowel << " isn't a vowel";
	}
}