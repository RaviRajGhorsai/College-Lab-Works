#include<iostream>
using namespace std;

class Time{
    int hour,min;

    public:
        void GetTime(int h,int m){
            hour=h;
            min=m;
        }
        void Sum(Time &t1,Time &t2){
           
            min=t1.min+t2.min;
            hour=min/60;
            min=min%60;
            hour=t1.hour+t2.hour;
            
        }
        void PutTime(){
            cout<<hour<<"hours "<<min<<"minutes"<<endl;
        }
};

int main()
{
Time t1,t2,t3;
t1.GetTime(4,50);
t2.GetTime(3,20);
t3.Sum(t1,t2);
t3.PutTime();
return 0;
}