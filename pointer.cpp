#include<iostream>
using namespace std;

int main()
{
    int a=10;
    int* b=&a;

    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of b is "<<b<<endl;

    cout<<"The Value at address b is "<<*b;

    return 0;
}