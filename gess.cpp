#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){
    int number,guess;
    srand(time(0));
    number = rand() % 100 + 1;

    cout<<"Guess a number between 1 to 100 : ";
    cin>>guess;

    if (guess==number)
    {
        cout<<"Your Guess is right"<<endl;
        
    }
    else{
        cout<<"Your Guess is wrong"<<endl;
        cout<<number;

    }

    
}
