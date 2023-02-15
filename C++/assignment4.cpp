#include<iostream>
using namespace std;

int main(){
	int array[5]={1,5,7,8,4};
	
	int sum=0;
	
	for(int i=0;i<5;i++){
		sum+=array[i];
	}
	
	cout<<"the sum is: "<<sum;
	
	
	return 0;
}
