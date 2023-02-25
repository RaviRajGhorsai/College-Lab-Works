#include<iostream>
#include<string.h>
using namespace std;

class strconcat{
    char st[20] ;
    public:
        void getdata(){
            cout<<"enter a string: "<<endl;
            cin>>st;
        }
        void show(){
            cout<<"\n\n"<<st<<endl;
        }
        strconcat operator +(strconcat t2){
                strconcat t3;
                strcpy(t3.st,st);
                strcat(t3.st," ");
                strcat(t3.st,t2.st);
                return t3;
        }
};

int main()
{
strconcat t1,t2,t3;
t1.getdata();
t2.getdata();
t3=t1+t2;
t3.show();
return 0;
}