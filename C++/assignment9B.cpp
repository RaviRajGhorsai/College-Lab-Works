#include<iostream>
using namespace std;

void func(){
	static int i=1;
	cout<<i<<endl;
	i++;
	
	
}

int main(){
	func();
	func();
	func();
	
	return 0;
}
