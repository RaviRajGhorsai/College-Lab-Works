#include<iostream>
using namespace std;
 static int count=0;

class serial{

    int num;
   
    public:

    serial(int n){
        num=n;
        
        count++;
    }
    void display(){
        cout<<"I am object "<<num<<endl;
    }
};

int main()
{
serial s1=serial(1);
serial s2=serial(2);
serial s3=serial(3);

s1.display();
s2.display();
s3.display();
return 0;
}