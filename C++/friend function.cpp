#include<iostream>
using namespace std;

class num2;

class num1{
    int a;
    public:
        void getdata(){
            cout<<"Enter a number: "<<endl;
            cin>>a;
        }
        friend void sum(num1,num2);
};

class num2{
    int b;
    public:
        void getdata(){
            cout<<"enter a num: "<<endl;
            cin>>b;
        }
        friend void sum(num1,num2);
};

void sum(num1 x,num2 y){
    cout<<"sum is: "<<x.a+y.b<<endl;
}

int main()
{
num1 x;
num2 y;
x.getdata();
y.getdata();
sum(x,y);
return 0;
}