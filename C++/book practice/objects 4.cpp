#include <iostream>
using namespace std;

class employee
{
    int num;
    float compen;

public:
    void getdata()
    {
        cout << "enter number of the employee: " << endl;
        cin >> num;
        cout << "enter the compensation: " << endl;
        cin >> compen;
    }
    void display()
    {
        cout << "employee number: " << num << endl;
        cout << "compensation: " << compen << "\n"
             << endl;
    }
};

int main()
{

    employee e[3];

    for (int i = 0; i < 3; i++)
    {
        e[i].getdata();
    }
    for (int i = 0; i < 3; i++)
    {
        e[i].display();
    }

    return 0;
}