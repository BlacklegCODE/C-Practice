#include<iostream>
using namespace std;

int main()
{
    int cor = 56;
    int guess;
    int totalGuesses = 5;

    cout<<"Enter a guess :";

    while(cor != guess && totalGuesses != 0)
    {
        cin>>guess;
        if(cor > guess)
        {
            cout<<"The secret number is higher than that ! Try again."<<endl;
            totalGuesses--;
            cout<<"Guesses left :"<<totalGuesses<<endl;
        }
        else if(cor<guess)
        {
            cout<<"The secret number is lower than that ! Try again !"<<endl;
            totalGuesses--;
            cout<<"Guesses left :"<<totalGuesses<<endl;
        }
        else
        {
            cout<<"You got it right !";
        }
    }

    return 0;
}
