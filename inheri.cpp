#include <iostream>
using namespace std;

// Base class
class Employee
{
    
public:
    int id;
    float salary;
    Employee(int inpID)
    {
        id = inpID;
        salary = 34.0;
    }
    Employee(){}
};

// Derived class
/*
class {{derived-class-name}} : {{visibility- mode}} {{base- class-name}}
{
    class members/methods/etc.....
}
*/

// Creating a programmer class derived from employee base class
class programmer : Employee
{
public:
    programmer(int inpId){
        id = inpId;
    }
    int languagecode = 9;
    void getdata(){
        cout<<id<<endl;
    }
};
int main()
{
    Employee suraj(1), rohan{2};
    cout << suraj.salary << endl;
    cout << rohan.salary << endl;
    programmer skillf(1);
    cout<<skillf.languagecode<<endl;
    skillf.getdata();
    return 0;
}