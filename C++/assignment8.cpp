/*Write a program that defines a function that takes two arguments: an integer and a string. The function
should have a default argument for the string, so that if it is not provided when the function is called, the
default value "Default String" will be used.*/

#include<iostream>
using namespace std;

void info(int age, string name="User"){
	cout<<"HI, "<<name<<" your age is "<<age<<endl;
}

int main(){
	
	int age;

	
	cout<<"enter age: "<<endl;
	cin>>age;
	
	info(age,"Ravi");
	
	return 0;
}
