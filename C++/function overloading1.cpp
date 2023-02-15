#include<iostream>
using namespace std;

float area(float a, float b){
    return (a*b)/2;
}

int area(int a, int b){
    return (a*b);
}

int  area(int a){
    return (a*a);
}
float area(float a){
    return (3.14*a*a);
}

int main(){

cout<<"area of triangle is "<<area(2.0,3.0)<<endl;
cout<<"area of rectangle is "<<area(2,3)<<endl;
cout<<"area of square is "<<area(2)<<endl;
cout<<"area of circle is "<<area(4.0);

    return 0;
} 
