#include <iostream>
#include <stdlib.h>
using namespace std;

struct rectangle
{
    int length;
    int breadth;            
};

int main()
{
    int *ptr1;
    char *ptr2;
    float *ptr3;
    double *ptr4;

    struct rectangle *ptr5;

    cout<<sizeof(ptr1)<<endl;
    cout<<sizeof(ptr2)<<endl;
    cout<<sizeof(ptr3)<<endl;
    cout<<sizeof(ptr4)<<endl;
    cout<<sizeof(ptr5)<<endl;

    return 0;
    
}






//using malloc
// {
//     int *ptr;
//     ptr=new int[2]; //in c++
//     // ptr=(int *)malloc(5*sizeof(int)); //in c
//     ptr[0]=2;ptr[1]=4;  
//     for(int i=0;i<2;i++)
//     cout<<ptr[i]<<endl;  
    
//     delete[] ptr;   //u can skip
//     //free(p);  //in c
//     return 0;
// }

//pointer using array
// {
//     int A[5]={1,2,3,4,5};
//     int *ptr;
//     ptr=A;
//     for(int i=0;i<5;i++)
//     cout<<ptr[i]<<endl;
//     return 0;
// }

// baisc pointer
// {
//  int a=10;
//  int *ptr;
//  ptr=&a;
//  cout<<*ptr;
// return 0;
// }