#include<iostream>
using namespace std;

class compare{
    int a;
    public:
        void getdata(){
            cin>>a;
        }
        void operator ==(compare t2){
                if(a==t2.a){
                    cout<<a<<" is equal to "<<t2.a<<endl;
                }
                else
                    cout<<a<<" is not equal to "<<t2.a<<endl;
        }
};

int main()
{
compare t1,t2;
cout<<"enter num for t1 obj: "<<endl;
t1.getdata();
cout<<"enter numfor t2 obj: "<<endl;
t2.getdata();
t1==t2;

return 0;
}