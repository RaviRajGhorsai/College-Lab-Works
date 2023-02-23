
#include<iostream>
using namespace std;

class Rectangle{
    int length,breadth;

    public:
        Rectangle(int l,int b){
            length=l;
            breadth=b;
        }
        int Area(){
            return length*breadth;
        }
        void Display(){
            cout<<"Area: "<<Area()<<endl;
        }
        ~Rectangle(){
            cout<<"object has been successfully destroyed!!"<<endl;
        }
};

int main()
{
Rectangle r(2,3);
r.Area();
r.Display();
return 0;
}