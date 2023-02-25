#include<iostream>
#include<string.h>
using namespace std;

class author{
    string aname;
    public:
        friend class book;
};

class book{
    string bname;
    float price;
    author a;
    public:
        void getdata(){
            cout<<"enter the author name: "<<endl;
            cin>>a.aname;
            cout<<"enter book name: "<<endl;
            cin>>bname;
            cout<<"enter the price of book: "<<endl;
            cin>>price;
        }
        void putdata(){
            cout<<"Author: "<<a.aname<<endl;
            cout<<"Book:   "<<bname<<endl;
            cout<<"Price:  "<<price<<endl;
        }
};

int main()
{
book b;
b.getdata();
b.putdata();
return 0;
}