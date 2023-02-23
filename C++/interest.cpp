#include<iostream>
using namespace std;

class Interest{

    float principle,rate,time;
     
    public:
        void GetData(float p,float r,float t){
            principle=p;
            rate=r;
            time=t;
        }
        int FindInterest(){
                return principle*rate*time/100;
        }
        void Display(){
            cout<<"Interest: "<<FindInterest()<<endl;
        }

};
int main()
{
Interest i;
i.GetData(2000,5,7);
i.FindInterest();
i.Display();
return 0;
}