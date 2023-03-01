#include<iostream>
#include<fstream>
using namespace std;

int main()
{
fstream myFile;
myFile.open("Ravi.txt",ios::out);  //write
if(myFile.is_open()){
    cout<<"File has been successfully created!!"<<endl;
    myFile<<"Hello World!!\n";
    myFile.close();
}
return 0;
}