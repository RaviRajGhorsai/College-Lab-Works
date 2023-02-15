#include<iostream>
using namespace std;

int calc(int a,int b, char operation){

		
	switch(operation){
	
		case '+': return a+b;
		           break;
		case '-': return a-b;
		           break;
		case '*': return a*b;
		          break;
		case '/': 
		
		            if(b==0){
		             cout<<"   MATH ERROR!!!!!"<<endl;
		               break;
		              }
		             else{
			            return a/b;
		              	break;
		            }
		          
	default:cout<<"invalid operation/char."<<endl;		  		              
	
	}

}

int main(){
int a,b;
char str;

cout<<"enter two nums: "<<endl;
cin>>a>>b;

cout<<"enter a operation: "<<endl;
cin>>str;

int result = calc(a,b,str);

cout<<"the result is: "<<result<<endl;

	return 0;
}
