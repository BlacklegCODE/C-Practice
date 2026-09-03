//Creating a guessing game using while loop
#include<iostream>
using namespace std;

int main()
{
    int cor = 56;
    int guess;

    cout<<"Enter a guess :";

    while(cor != guess)
    {
        cin>>guess;
        if(cor > guess)
        {
            cout<<"The secret number is higher than that ! Try again."<<endl;
        }
        else if(cor<guess)
        {
            cout<<"The secret number is lower than that ! Try again !"<<endl;
        }
        else
        {
            cout<<"You got it right !";
        }
    }

    return 0;
}
