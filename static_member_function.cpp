#include <iostream>
using namespace std;

class Emplyoee{
    int id;
    static int count;

    public:
    void setData(void){
        cout<<"Enter the ID "<<endl;
        cin>>id;
        count ++;
    }
    void getData(void){
        cout<<"The ID is "<<id<<" and this is emplyoee no. "<<count<<endl;}

    void getcount(void){
        cout<<"The value of count is "<<count<<endl;
    }
    
    
};

int Emplyoee::count; //add any no like count=100

int main()
{
    Emplyoee abhi,suji;
    abhi.setData();
    abhi.getData();
    abhi.getcount();

    suji.setData();
    suji.getData();
    suji.getcount();
    
    return 0;
}