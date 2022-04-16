#include <iostream>
#include <time.h>
using namespace std;

class arthamatics
{
    int A;
    int B;

public:
    arthamatics(int a, int b)
    {
        this->A = a;
        this->B = b;
    }

    int add()
    {
        int e;
        e = A + B;
        return e;
    }
    int sub()
    {
        int e;
        e = A - B;
        return e;
    }
};
int main()
{
    arthamatics ar(12, 2);
    cout << "Add " << ar.add() << endl;
    cout << "Sub " << ar.sub() << endl;
    return 0;
}