#include<iostream>
using namespace std;

int sum(int a, int b){
    cout<<"using 2 arguments ";  //in function overloading calling function matches the number of 
                                //arguments in the function and operates accordingly
    return a+b;
}

int sum(int a, int b, int c){
    cout<<"using 3 arguments ";
    return a+b+c;
}

int main(){

    cout<<"sum of 3 and 6 is "<<sum(3,6)<<endl;
    cout<<"sum of 3, 7 and 6 is "<<sum(3,7,6)<<endl;
    return 0;
}