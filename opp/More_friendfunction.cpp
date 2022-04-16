#include <iostream>
using namespace std;

class Y;
class X{
    int data;
    public:
        void SetValue(int value){
            data = value;
        }
    friend void add(X,Y);
};

class Y{
    int num;
    public:
        void SetValue(int value){
            num = value;
        }
    friend void add(X,Y);
};

void add(X o1, Y o2){
    cout<<"Summing data of X and Y gives me "<<o1.data + o2.num;
}

int main()
{
    X a;
    a.SetValue(4);
    Y b;
    b.SetValue(5);

    add(a, b);

    return 0;
}