#include<iostream>
using namespace std;

class time{
	int hour,min,sec;
	
	public:
		time(){
			hour=min=sec=0;
		}
		void getdata(int a,int b,int c){
			hour=a;
			min=b;
			sec=c;
		}
		
		void sum(time obj1,time obj2){
			
		sec += obj1.sec + obj2.sec;
		if(sec>59){
			sec = 60;
			min++;
		} 
		
		min = obj1.min + obj2.min;
		if(min>59){
			min = 60;
			hour++;
		}
		hour += obj1.hour + obj2.hour;
		
		}
		void display(){
			cout<<hour<<":"<<min<<":"<<sec<<endl;
		}
};

int main(){
	time obj1,obj2,obj3;
	
	obj1.getdata(3,34,23);
	obj2.getdata(4,40,34);
	obj3.sum(obj1,obj2);
	obj3.display();
	
	
	return 0;
}
