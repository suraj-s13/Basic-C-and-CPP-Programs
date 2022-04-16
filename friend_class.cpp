#include <iostream>
using namespace std;

//forward decliration
class complex;

class claculator{
    public:
    int add(int a, int b){
        return (a+b);
    }

    int sumcomplex(complex, complex);
    int sumcomcomplex(complex, complex);
};

class complex{
    int a,b;
    //indivisualy friend class
   // friend int claculator::sumcomplex(complex o1, complex o2);
   // friend int claculator::sumcomcomplex(complex o1, complex o2);

    //alternate full class as friend function
    friend class claculator;
    public:
    void setData(int n1,int n2){
        a = n1;
        b = n2;

    }
    void printNumber(){
        cout<<"Your number is "<<a<<"+"<<b<<"i"<<endl;

    }
};

int claculator :: sumcomplex(complex o1, complex o2){
        return (o1.a+o2.a);
    }

int claculator :: sumcomcomplex(complex o1, complex o2){
        return (o1.b+o2.b);
    }

int main()
{
    complex o1,o2;
    o1.setData(1,4);
    o2.setData(5,7);
    
    claculator clk;
    int result = clk.sumcomplex(o1,o2);
    cout<<"The sum of complex no. o1 and o2 is "<<result<<endl;
    int results = clk.sumcomcomplex(o1,o2);
    cout<<"The sum of comcomplex no. o1 and o2 is "<<results<<endl;
    return 0;
}