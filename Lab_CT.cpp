#include <iostream>
using namespace std;
class first
{
    char name[10];
    int book_no;
    public:
    void getdata()
{

    cout<<"\nEnter The Name of book:";
    cin>>name;
    cout<<"\nEnter The Book NO.:";
    cin>>book_no;
}
void putdata()
{
    cout<<"\nThe Name of book:"<<name;
    cout<<"\nThe Book NO.:"<<book_no;
}
};

class second
{
    char auther[10],publisher[10];
    public:
    void getdata()
{
    cout<<"\nEnter The Author's Name:";;
    cin>>auther;
    cout<<"\nEnter The Publisher:";
    cin>>publisher;
}
void showdata()
{
    cout<<"\nThe Author's Name:"<<auther;
    cout<<"\nEnter The Publisher:"<<publisher;
}
};
class third:public first,public second
{
    int pages_no;
    int year;
    public:
    void get()
{
    first::getdata();
    second::getdata();
    cout<<"\nEnter The No. of Pages:";
    cin>>pages_no;
    cout<<"\nEnter The Year of Publication:";
    cin>>year;
}
void display()
{
    putdata();
    showdata();
    cout<<"\nThe No. of Pages:"<<pages_no;
    cout<<"\nThe Year of Publication:"<<year;
}
};

int main()
{
    third book[5];
    int num;
    cout<<"\nEnter The Number of Books:";
    cin>>num;

    for(int i=0; i<num; i++)
    {
        book[i].get();
        cout<<endl;
    }
    for(int i=0; i<num; i++)
    {
        book[i].display();
        cout<<endl;
    }
    return 0;
}
