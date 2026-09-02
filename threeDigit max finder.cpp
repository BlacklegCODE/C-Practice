#include<iostream>
using namespace std;

int findMax(int a, int b, int c)
{
    int result;

    if(a>b && c < a)
    {
        result = a;
    }
    else if(b > a && b > c)
    {
        result = b;
    }
    else
    {
        result = c;
    }
    return result;
}
int main()
{
    int x,y,z;

    cout<<"Enter digit 1 :"<<endl;
    cin>>x;

    cout<<"Enter digit 2 :"<<endl;
    cin>>y;

    cout<<"Enter digit 3 :"<<endl;
    cin>>z;

    cout<<"The max is :";
    cout<<findMax(x,y,z);

    return 0;
}
