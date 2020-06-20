#include <iostream>

void print(std::string message){
	std::cout << message << '\n';
}

int main()
{
	std::string g = "Hello";
	print("Hello World\nJaba");
	std::cout << g.length() << std::endl;
	return 0;
}
