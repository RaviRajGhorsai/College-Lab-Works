#include<iostream>
using namespace std;

int main(){
	int age;
	string name;
	
	cout<<"enter your name: "<<endl;
	getline(cin,name);
	
	cout<<"enter your age: "<<endl;
	cin>>age;
	
	cout<<"Hello, "<<name<<"! You are "<<age<<"years old"<<endl;
	
	return 0;
}
