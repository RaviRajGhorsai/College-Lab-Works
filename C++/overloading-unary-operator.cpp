#include<iostream>
using namespace std;

class test{
    int a;
    public:
        test(){
            a=0;
        }
        void operator ++(int){
            a++;
        }
        void operator --(int){
            a--;
        }
        void display(){
            cout<<a<<"\n"<<endl;
        }
};

int main()
{
test t1;
t1++;

t1++;
t1.display();
t1--;
t1.display();

return 0;
}