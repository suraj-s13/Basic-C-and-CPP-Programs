#include <iostream>
using namespace std;

int linearsearch(int arr[], int size, int element){
    for(int i = 0; i < size; i++){
        if(arr[i] == element){
            return i;
        }
    }
    return -1;
}
int main()
{
    int i,arr[9];
    for(int j = 0; j>9 ; j++){
        cin>>arr[j];
    }
    int element = 8;
    int search= linearsearch(arr, 9, element);
    cout<<"The elemet "<< element <<" was found at the index"<< search <<endl;
    return 0;
}