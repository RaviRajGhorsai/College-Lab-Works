#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
fstream myFile;
myFile.open("Ravi.txt",ios::in);
    if(myFile.is_open()){
        cout<<"your file is in read mode!!\nyour contents of the file is:\n"<<endl;
        string line;
        while(getline(myFile,line)){
            cout<<line<<endl;
        }
    }
    myFile.close();

return 0;
}