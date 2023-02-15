#include<iostream>
using namespace std;

class employee{
    enum etype{Manager,Accountant,Director,WebDeveloper};
    int month,year,day;
    char ch;

    public:
    void getdata(){
            cout<<"enter the date of hired day in the format Y/M/D: "<<endl;
            cin>>year>>month>>day;
            cout<<"Enter the position of employee('M' for Manager 'A' foe Accountant 'D' for Director and 'W' for WebDeveloper)"<<endl;
            cin>>ch;
    }
    void display(){
        etype e1;
        cout<<"\nDate of hired: "<<year<<"/"<<month<<"/"<<day<<endl;
        switch(ch){
            case 'm':e1=Manager;
                     cout<<"Position: "<<e1;
                     break;
            case 'a':e1=Accountant;
                     cout<<"position: "<<e1;
                     break;
            case 'd':e1=Director;
                     cout<<"position: "<<e1;
                     break;
            case 'w':e1=WebDeveloper;
                    cout<<"position: "<<e1<<"\n";
                    break;                           
         }

    }

};

int main()
{
employee e[3];

for(int i=0;i<3;i++){
    e[i].getdata();

}

for(int i=0;i<3;i++){
    e[i].display();
    
}

return 0;
}