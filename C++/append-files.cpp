#include<iostream>
#include<fstream>
using namespace std;

int main()
{
fstream myFile;
myFile.open("Ravi.txt",ios::app);  //append
if(myFile.is_open()){
    cout<<"file is opened successfully!!"<<endl;
    myFile<<"this has been appended!!"<<endl;
    myFile.close();
}
return 0;
}