#include<iostream>
using namespace std;

int sum(int a,int b)
{
	return a+b;
}
int main(){

int a,b;

cout<<"enter two nums: "<<endl;
cin>>a>>b;

int result=sum(a,b);
cout<<"the sum is: "<<result<<endl;
	
	return 0;
}
