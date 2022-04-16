#include <iostream>
using namespace std;
int main()
{
 int marks[]={12,13,14,15,16,23,25,26,30};

    int* p=marks;
    for(int i=0;i<9;i++){
        cout<<*(p+i)<<endl;
    }
return 0;
}