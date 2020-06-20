#include <iostream>

int main()
{
	std::string word = "Hello";
	int len = word.length();
	std::cout << len << std::endl;
	for (int i = 0;i <= len;i++){
    	std::cout << word[len-i];
	}
	return 0;
}
