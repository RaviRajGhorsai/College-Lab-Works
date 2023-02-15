#include<iostream>
using namespace std;

class sample{
	int num1,num2;
	
	public:
		sample(int a,int b){
			num1=a;
			num2=b;
		}
		sample(sample &obj){
			num1=obj.num1;
			num2=obj.num2;
		}
		void display(){
			cout<<"Num1 is: "<<num1<<"\nNum2 is: "<<num2<<"\n"<<endl;
		}
		
};

int main(){
	sample obj1(2,3);
	obj1.display();
	sample obj2=obj1;
	obj2.display();
	
	
	return 0;
}
