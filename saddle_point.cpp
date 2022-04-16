#include <iostream>
using namespace std;
const int MAX = 100;
// class saddle{
//     public:
//     int i,j;
//     int arr[i][j];
//     void input(){
//         cout<<"enter value of row and column of matrix\n";
//         cin>>i>>j;
        
//         cout<<"Enter elements of matrix\n";    
//         for(int a=0;a<i;a++) for(int b=0;b<j;b++) cin>>*((a+j)+i);
//     }
// }
bool saddle(int arr[MAX][MAX],int n){
for(int i=0;i<n;i++){
    int min = arr[i][0],col_ind=0,k;
    for(int j=0;j<n;j++){
        if(min>arr[i][j]){
            min=arr[i][j];
            col_ind=j;
        }

    }
        for(k=0;k<n;k++)    if(min<arr[k][col_ind])     break;
   
            if(k==n) {
                cout<<"\nsaddle point found  "<<min;
                return true;
            }
}
        cout<<"\nno saddle point\n";
        return false;
}
int main()
{
    int n;
    cout<<"Enter rows/coloumn of square matrix\n";
    cin>>n;

    int arr[MAX][MAX];
    for(int i=0;i<n;i++) for (int j = 0; j < n; j++) cin>>arr[i][j];
    for(int i=0;i<n;i++) {for (int j = 0; j < n; j++)cout<<arr[i][j]<<" ";  cout<<endl;}
    saddle(arr,n);
    
    
    
    return 0;
}