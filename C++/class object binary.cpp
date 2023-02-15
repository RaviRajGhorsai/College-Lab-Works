#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;
    void checkbin(void);

public:
    void getdata(void);

    void complement(void);
    void displaycom(void);
};

void binary ::getdata(void)
{
    cout << "enter binary number: " << endl;
    cin >> s;
}

void binary ::checkbin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}

void binary ::complement(void)
{
    checkbin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary ::displaycom(void)
{

    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}
int main()
{

    binary b;
    b.getdata();
    // b.checkbin();
    b.complement();
    b.displaycom();

    return 0;
}