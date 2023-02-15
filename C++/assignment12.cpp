#include <iostream>
using namespace std;

inline int maximum(int a,int b,int c){
	
	return (a>b)?a:(b>c)?b:c;
}

int main() {
  
  int a,b,c;
  
  cout<<"enter three nums: "<<endl;
  cin>>a>>b>>c;
  
  int result = maximum(a,b,c);
  
  cout<<"the maximum number is: "<<result<<endl;
  
  return 0;
}

