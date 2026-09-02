//If else statements practice

#include<iostream>

using namespace std;

int main()
{
    bool sweet = true;
    bool spicy = false;

    if (sweet && spicy)
    {
        cout<<"The flavour is confusing !";
    }
    else if(!sweet && spicy)
    {
        cout<<"This is very spicy !";
    }
    else if(sweet && !spicy)
    {
        cout<<"This is sweet !";
    }
    else
    {
        cout<<"This is a predicament tbh!";
    }
    return 0;
}
