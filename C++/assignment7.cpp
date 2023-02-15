/*Write a program that demonstrates function overloading by defining two functions with the same name but
different parameter lists. One function should take two integers as arguments and return their sum, and the
other function should take three integers as arguments and return their sum. Call both functions in the main
() function and print the results.*/



#include<iostream>
using namespace std;

void sum(int a, int b){
	int sum = a+b;
	cout<<"the sum of two nums is: "<<sum<<endl;
}

void sum(int a, int b, int c){
	int sum = a+b+c;
	cout<<"the sum of three nums is: "<<sum;
}

int main(){
	sum(2,2);
	sum(3,3,4);
	
	return 0;
}
