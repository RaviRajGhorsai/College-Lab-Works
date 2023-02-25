#include<iostream>
using namespace std;

void swap(int &a,int &b){   //call by reference
    int temp=a;
    a=b;
    b=temp;
}

//void swap(int *a,int *b){   //call by address
  //  int temp=*a;
  //  *a=*b;
  //  *b=temp;
//}

int main(){
    int n,m;
    cout<<"enter value of n and m: ";
    cin>>n>>m;

    swap(n,m);   //call by reference
    cout<<"\nn: "<<n<<"\nm: "<<m;

    //swap(n,m);  //call by address
    //cout<<"\nn: "<<n<<"\nm: "<<m;


    return 0;
}