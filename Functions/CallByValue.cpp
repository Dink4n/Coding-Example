#include <iostream>

void change(int n){
    n += 1;
}
int main(){
    int x = 0;
    std::cout << "X in main before : " << x << std::endl;
    change(x);
    std::cout << "X in main after Change : " << x << std::endl;
}
