/*Write a program that defines a class for a bank account with properties for balance and holder name. The
class should have methods for depositing and withdrawing money, as well as a method for displaying the
account balance and holder name*/

#include<iostream>
using namespace std;

class bank{
	float AccBlc;
	string name;
	
	public:
		
	bank(float accblc, string Name){
		AccBlc = accblc;
		name = Name;
	}
	void deposit(bank obj,int amount){
		AccBlc=obj.AccBlc+amount;
	}
	
	void withdraw(bank obj2, int amount){
		AccBlc = obj2.AccBlc - amount;
	}

	
	void display(){
		cout<<"Account Number is: "<<AccBlc<<endl;
		cout<<"Name of account holder: "<<name<<endl;
	}
};

int main(){
	bank ac=bank(500,"ravi");
	ac.display();
	ac.deposit(ac,300);
	ac.display();
	ac.withdraw(ac,200);
	ac.display();
	return 0;
}
