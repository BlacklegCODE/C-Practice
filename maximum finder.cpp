#include<iostream>

using namespace std;

int getMax(int a, int b)
{
    int result;
    if( a >  b)
    {
        result = a;
    }
    else
    {
        result = b;
    }
    return result;
}

int main()
{
    int x,y;
    cout<<"Enter first digit :"<<endl;
    cin>> x;

    cout<<"Enter second digit :"<<endl;
    cin>>y;
    cout<<"The maximum is :"<<endl;


    cout<<getMax(x,y);
    return 0;
}
