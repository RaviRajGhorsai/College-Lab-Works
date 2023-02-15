/*Design a class to represent a bank account with data members name, account-number, account-type, and
balance and functions to assign initial values, to deposit an amount, to withdraw an amount after checking
balance, and to display the name and balance.*/


#include<iostream>
using namespace std;

class bank{
	string name,type;
	int acc,blc;
	
	public:
	void getdata(int accno, int blcc, string Name){
		acc=accno;
		blc=blcc;
		name=Name;
	}
	
	void withdraw(bank obj,int amount){
		blc=obj.blc-amount;
		
	}
	
	void display(){
		cout<<"Your name is "<<name<<". Your balance is "<<blc<<endl;
	}
	
	
};

int main(){
	bank obj;
	obj.getdata(12,500,"ravi");
	obj.display();
	obj.withdraw(obj,200);
	obj.display();

	
	return 0;
}
