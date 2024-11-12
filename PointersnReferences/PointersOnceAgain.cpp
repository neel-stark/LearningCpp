#include <iostream>

#define log(x) std::cout << x << std::endl

int main(){

    int var = 8;
    int var2 = 9;
    
    int* ptr = &var;
    int* ptr2 = &var2;

    *ptr = 10;
    log(var);
    return 0;
}