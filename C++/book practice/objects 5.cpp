#include<iostream>
using namespace std;

class date{
    int year,month,day;

public:

date(){
    year=month=day=0;
}
void calc(){
    if(day>30){
        month++;
        day-=30;
    }
    if(month>12){
        year++;
        month-=12;
    }
}


void getdata(){
    cout<<"enter the year: "<<endl;
    cin>>year;
    cout<<"enter the months: "<<endl;
    cin>>month;
    cout<<"enter the day: "<<endl;
    cin>>day;
}




void display(){
    cout<<year<<"/"<<month<<"/"<<day<<endl;
}


};

int main()
{
date d1;
d1.getdata();
d1.calc();
d1.display();
return 0;
}