#include <iostream>
using namespace std;

class binary
{
    string s;

public:
    void read(void);
    void chk(void);
    void onces(void);
    void display(void);
};
void binary::read(void)
{
    cout << "Enter the binary no.:" << endl;
    cin >> s;
}
void binary::chk(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Not a binary formate" << endl;
            exit(0);
        }
    }
}

void binary::onces(void)
{
    for (int i = 0; i < s.length(); i++)

        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            (s.at(i) = '1');
            s.at(i) = '0';
        }
}

void binary::display(void)
{
    cout << endl
         << "Display your binary number" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}

int main()
{
    binary a;
    a.read();
    a.chk();
    a.display();
    a.onces();
    a.display();

    return 0;
}