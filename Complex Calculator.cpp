#include<iostream>

using namespace std;

int main()
{
    int a,b, result;
    char op;

    cout<<"Enter num 1 :"<<endl;
    cin>>a;
    cout<<"Enter operator :"<<endl;
    cin>>op;
    cout<<"Enter num 2 :"<<endl;
    cin>>b;


    if(op == '+')
    {
        result = a +b;
        cout<<"Answer :"<<result;
    }
    else if(op == '-')
    {
        result = a-b;
        cout<<"Answer :"<<result;
    }
    else if(op == '*')
    {
        result = a*b;
        cout<<"Answer :"<<result;
    }
    else if(op == '/' && b != 0)
    {
        result = a/b;
        cout<<"Answer :"<<result;
    }
    else if(b == 0)
    {
        cout<<"Cannot divide by 0!";
    }
    else
    {
        cout<<"Something went wrong!";
    }



    return 0;
}
