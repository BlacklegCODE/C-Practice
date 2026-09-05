//Write int findMin(int a, int b, int c) from scratch — smallest of three numbers.
//Test it with a=10, b=10, c=5 and a=b=c=7 before you consider it done.

#include<iostream>
using namespace std;

int findMax(int a, int b, int c)
{
    int result;
    if(a>b && a>c)
    {
        result = a;
    }
    else if(b>a && b>c)
    {
        result = b;
    }
    else if(c>a && c>b)
    {
        result = c;
    }
    else if(a==b || a == c)
    {
        result = a;
    }
    else if(b == c || b == a)
    {
        result = b;
    }
    else if(c == a || c == b)
    {
        result = c;
    }

    return result;
}
int main()
{
    int x,y,z;

    cout<<"Enter x :";
    cin>>x;

    cout<<"Enter y :";
    cin>>y;

    cout<<"Enter z :";
    cin>>z;
    cout<<endl;
    cout<<findMax(x,y,z);

}
