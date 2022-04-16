#include <iostream>
using namespace std;

template<class T>
class Arthmetic
{
    T a;
    T b;

public:
    Arthmetic(T a, T b);
    T add();
    T sub();
};
template<class T>
Arthmetic<T>::Arthmetic(T a, T b)
{
    this->a = a;
    this->b = b;
}
template<class T>
T Arthmetic<T>::add()
{
    T e;
    e = a + b;
    return e;
}
template<class T>
T Arthmetic<T>::sub()
{
    T e;
    e = a - b;
    return e;
}
int main()
{
    Arthmetic<float> ar(12.4, 2.3);
    cout << "Add " << ar.add() << endl;
    cout << "Sub " << ar.sub() << endl;
    return 0;
    
}