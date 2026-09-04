//Creating an exponent function

#include<iostream>
using namespace std;

int expo(int dig, int pow)
{
    int result = 1;
    for(int i = 1;i<=pow;i++)
    {
        result *= dig ;
    }
    return result;
}

int main()
{
    int x,y;

    cout<<"Enter digit to be buffed :";
    cin>>x;
    cout<<endl;
    cout<<"Enter the power to be raised :";
    cin>>y;

    cout<<"The result is :"<< expo(x,y);

    return 0;
}
