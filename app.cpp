#include <iostream>
#include <time.h>
using namespace std;

class arthamatics
{
    int a;
    int b;

public:
    arthamatics(int a, int b)
    {
       this-> a = a;
       this-> b = b;
    }
 
    int add()
    {
        int e;
        e = a + b;
        return e;
    }
    int sub()
    {
        int e;
        e = a - b;
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