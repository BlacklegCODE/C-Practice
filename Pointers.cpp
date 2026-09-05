#include<iostream>
using namespace std;

int main()
{
    int balance = 500;
    int *pBalance = &balance;

    cout<<balance<<": Just the variable"<<endl;
    cout<<&balance<<": The memory location address"<<endl;
    cout<<pBalance<<": Referenced pointer variable"<<endl;
    cout<<*pBalance<<": Dereferenced pointer variable"<<endl;

    return 0;
}
