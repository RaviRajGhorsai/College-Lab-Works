#include<iostream>
using namespace std;

class sample{
    static int count;
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

int sample :: count;

int main()
{
sample c1,c2,c3;

return 0;
}