#include <iostream>
using namespace std;

struct rectangle
{
    int length;
    int breadth;
};
int main()
{
    struct rectangle r={10,5};
    struct rectangle *ptr=&r;

    r.length=15;
    (*ptr).length=20; //or p-> length=20;
    cout<<((*ptr).length*r.breadth);

return 0;
}