#include<iostream>
using namespace std;

class distance2;

class distance1{
    int feet,inch;

    public:
        void getdata(){
            cout<<"enter feet and inch: "<<endl;
            cin>>feet>>inch;
        }
        friend void add(distance1, distance2);
};

class distance2{
    int feet,inch;
    public:
        void getdata(){
            cout<<"enter feet and inch for d2: "<<endl;
            cin>>feet>>inch;
        }
        friend void add(distance1,distance2);
};

void add(distance1 d1,distance2 d2){
    int Feet,Inch;
    Feet=d1.feet+d2.feet;
    Inch=d1.inch+d2.inch;
    Feet=Feet+Inch/12;
    Inch=Inch%12;

    cout<<"feet: "<<Feet;
    cout<<"inch: "<<Inch;
}
int main()
{
distance1 a;
distance2 b;
a.getdata();
b.getdata();
add(a,b);
return 0;
}