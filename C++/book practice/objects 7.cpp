#include<iostream>
using namespace std;

class angle{
    int degree;
    float min;
    char ch;

    public:

    angle(int deg,float minn,char chh){
        degree=deg;
        min=minn;
        ch=chh;
    }
    void display(){
        cout<<degree<<'\xF8'<<min<<"' "<<ch<<endl;
    }
};

int main()
{

angle a1=angle(23,40.5,'N');
a1.display();


return 0;
}