#include <iostream>
using namespace std;

int* getPointer(int *n) {
    
    return *n;
}

int main() {
    int num = 10;
    int *p = getPointer(num);
    std::cout << *p << std::endl;
    return 0;
}

