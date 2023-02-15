#include<iostream>
using namespace std;

class rectangle{
	
	private:
		int length, breadth,perimeter,area;
		
	public:
	     rectangle(int a,int b){
			length = a;
			breadth = b;
		}
		void peri(){
			perimeter = 2*(length+breadth);
			cout<<"the perimeter is: "<<perimeter<<endl;
		}
		void ar(){
			area = length*breadth;
			cout<<"the area is: "<<area<<endl;
		}
	
};




int main(){
	
	
	int l,b;
	cout<<"enter length and breadth:  "<<endl;
	cin>>l>>b;
	
	rectangle rect = rectangle(l,b);
	
	rect.ar();
	rect.peri();
	
	return 0;
}
