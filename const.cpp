#include <iostream>
using namespace std;

class point
{
    int x, y;

public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }

    void displaypoint()
    {
        cout << x << " " << y;
    }
};
int main()
{

    point p(1, 2);
    p.displaypoint();

    return 0;
}