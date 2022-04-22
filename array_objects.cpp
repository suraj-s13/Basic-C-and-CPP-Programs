#include <iostream>
using namespace std;

class employee
{
    int ID;
    int Salary;

public:
    void SetId(void)
    {
        Salary = 122;
        cout << "Enter the ID of the Employee " << endl;
        cin >> ID;
    }
    void GetId(void)
    {
        cout << "The ID of this Employee " << ID << endl;
    }
};
int main()
{
    employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].SetId();
        fb[i].GetId();
    }
    return 0;
}