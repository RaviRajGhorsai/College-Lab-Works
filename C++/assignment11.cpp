#include <iostream>
#include<string>
using namespace std;

string &getPointer(string &n) {
    
    return n;
}

int main() {
    string cha = "ravi v";
    string &p = getPointer(cha);
    cout << p << endl;
    return 0;
}

