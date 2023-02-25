#include<iostream>
using namespace std;

class sample{
    static int a,b;
    public:
        static void getdata(){
            cout<<"enter value of a and b: "<<endl;
            cin>>a>>b;
            cout<<"a = "<<a<<endl<<"b = "<<b<<"\n"<<endl;
        }
};

int sample :: a;
int sample :: b;

int main()
{
sample s;
s.getdata();
sample ::getdata();
return 0;
}