#include <iostream>
using namespace std;


struct card
{
    int face;
    int shape;
    int color;
};
int main()
{
    // deck of card
    struct card deck[52]={{1,0,0},{2,0,0},{1,1,0},{2,1,0}};

    cout<<deck[0].face<<endl;
    cout<<deck[0].shape;
    

    return 0;
}

//structres using pointers

// struct student
// {
//     int roll;
//     char name[25];
//     char dep[10];
//     int room;
// };
// int main()
// {
    // student *ptr, a;
    // ptr=&a;
    // cout<<"Roll:"<<endl;
    // cin>>(*ptr).roll;
    // cout<<"Name:"<<endl;
    // cin>>(*ptr).name;
    // cout<<"Dep:"<<endl;
    // cin>>(*ptr).dep;
    // cout<<"Room:"<<endl;
    // cin>>(*ptr).room;

    // cout<<(*ptr).roll<<" "<<(*ptr).name <<" "<<(*ptr).dep <<" "119<<(*ptr).room;
    // return 0;}

// area of rectangle

// // struct complex
// // {
// //     int length;
// //     int breadth;
// // };

// // int main()
// // {
// //     struct complex o={10,5};
// //     o.length=10;
// //     o.breadth=5;
// //     printf("Area= %d",o.length*o.breadth);

// return 0;
// }