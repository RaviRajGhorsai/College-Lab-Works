#include<iostream>
using namespace std;

class test1{
    int a,b;
    public:
        void getdata(){
            cout<<"enter value of a abd b: "<<endl;
            cin>>a>>b;
        }
        friend class test2;
};

class test2{
    public:
    void putdata(test1 t){
        cout<<"a: "<<t.a<<endl<<"b: "<<t.b<<endl;
    }
};

int main()
{
test1 x;
x.getdata();
test2 y;
y.putdata(x);
return 0;
}