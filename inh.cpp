#include <iostream>
using namespace std;

class base
{
    int data1;

public:
    int data2;
    void setdata()
    {
        data1 = 10;
        data2 = 20;
    };
    int getdata1()
    {
        return data1;
    };
    int getdata2()
    {
        return data2;
    }
};

class derived : public base
{
    int data3;

public:
    void process();
    void display();
};

void derived ::process()
{
    data3 = data2 * getdata1();
}
void derived ::display()
{
    cout << "Data 1 " << getdata1() << endl;
    cout << "Data 2 " << data2 << endl;
    cout << "Data 3 " << data3 << endl;
}
int main()
{
    derived dev;
    dev.setdata();
    dev.process();
    dev.display();

    return 0;
}