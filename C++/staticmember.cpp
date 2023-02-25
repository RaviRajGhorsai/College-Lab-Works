#include<iostream>
using namespace std;

class sample{
    static int count;  //declaration
    public:
        sample(){
            count++;
            cout<<count<<" Object created."<<endl;
        }
        ~sample(){
            cout<<count<<" Object deleted."<<endl;
            count--;
        }
};

int sample :: count;  //defination

int main()
{
sample c1,c2,c3;

return 0;
}