#include<iostream>
using namespace std;

class distance1{

private:
int feet,inch;

public:
distance1(int f,int i){
    feet=f;
    inch=i;
}

int getfeet(){
    return feet;
}
int getinch(){
    return inch;
}

};

class distance2{
    private:
    int meter,centi,feet,inch;

    public:
    distance2(distance1 d){
        feet=d.getfeet();
        inch=d.getinch();
    }
    void convert(){
        meter=(feet/3.3)+(inch*0.4/100);
        
        meter=meter/100
    }

    void display(){
        cout<<meter<<"m"<<" "<<centi<<"cm"<<endl;
    }
};

int main()
{
distance1 d1(12,4);
distance2 d2 = distance2(d1);
d2.convert();
d2.display();
return 0;
}