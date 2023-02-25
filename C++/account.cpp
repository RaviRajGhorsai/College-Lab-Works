/*Write a program according to the specification given below:
- Create a class Account with data members acc no, balance, and min_balance(static)
-Include methods for reading and displaying values of objects
- Define static member function to display min_balance
-Create array of objects to store data of 5 accounts and read and display values of each object*/

#include<iostream>
using namespace std;

class account{
	
	int accno,blc;
	
	static int minblc;
	
	public:
		
	void getdata(){
		cout<<"enter account number: "<<endl;
		cin>>accno;
		cout<<"enter your balance: "<<endl;
		cin>>blc;
		cout<<"minimum balance: "<<endl;
		cin>>minblc;
	}
	
	void display(){
		cout<<"your account number is "<<accno<<". Your balance is "<<blc<<endl;
	}
	static void display1(){
		cout<<"Your min balance is "<<minblc<<endl;
	}
};

int main(){
	account acc[3];
	
	for(int i=0;i<3;i++){
		acc[i].getdata();


	}
	for(int i=0;i<3;i++){
			acc[i].display();
		acc[i].display1();	
	}

	
	return 0;
}
