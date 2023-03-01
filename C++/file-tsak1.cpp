#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
fstream myFile;
myFile.open("ASCII.txt",ios::out);
 for(int i=65;i<=90;i++){
    myFile<<i<<" ";
 }
 myFile.close();

 myFile.open("ASCII.txt",ios::in);
 if(myFile.is_open()){
   int a;
    while(myFile>>a){
      
        cout<<(char)a<<" ";
 }
 myFile.close();
 }
return 0;
}