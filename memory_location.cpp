#include <iostream>
using namespace std;

class shop{
    int itemid[100];
    int itemprise[100];
    int counter;
    public:
        void initcounter(void) {counter=0;}
        void getprise(void);
        void displayprise(void);
};

void shop:: getprise(void){
    cout<<"enter id of your item no."<<counter+1<<endl;
    cin>>itemid[counter];
    cout<<"enter prise of your item"<<endl;
    cin>>itemprise[counter];
    counter ++;
}

void shop:: displayprise(void){
    for(int i=0; i<counter; i++){
        cout<<"The prise of item with id no. "<<itemid[i]<<" is "<<itemprise[i]<<endl;

    }


}
int main()
{
    shop breakery;
    breakery.initcounter();
    for(int i=0;i<5;i++){
    breakery.getprise();}
    
    breakery.displayprise();

    return 0;
}