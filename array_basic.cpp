#include <iostream>

using namespace std;
int main()
{
    int n;
    cout << "Enter Size:";
    cin >> n;
    int A[n];
    // int A[6]={2,4,6,8,10,12};
    for (int x : A)
    {
        cout << x << endl;
    }
    // for(int i=0;i<10;i++)
    //{
    // cout<<A[i]<<endl;
    // }

    return 0;
}
