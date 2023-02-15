#include<iostream>
#include<cstring>
#include<conio.h>
using namespace std;
const char ESC=27;

class tollBooth{
	unsigned int number;
	double money;
	
	public:
		tollBooth(){
			number=0;
			money=0;
		}
		void payingcar(){
			number++;
			money+=0.5;
		}
		void nopaycar(){
			number++;
		}
		void display(){
			cout<<"total no. of cars passed: "<<number<<endl;
			cout<<"total amount of money collected: "<<money<<endl;
		}
		
};

int main(){
	tollBooth obj1;
	int ch;
	cout<<"enter 0  to count number of cars and money payed!!\nAnd enter 1 to count number of cars only!!\nAnd enter esc key ro print data!!\n\n"<<endl;
	do{
		ch = getche();
		
		if(ch == '0'){
			obj1.payingcar();
		}
		if(ch == '1'){
			obj1.nopaycar();
		}
	}while(ch != ESC);
	
	obj1.display();
	
	
	return 0;
}
