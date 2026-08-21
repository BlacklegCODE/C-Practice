#include<iostream>
using namespace std;

int main()
{
    string girlName, boyN;
    int aura;

    cout<<"This guy has {--} aura"<<endl;
    cout<<"This guy's name is {--}"<<endl;
    cout<<"This girl's name is {--}"<<endl;

    cout<<"Enter girl's name :"<<endl;
    getline(cin, girlName);
    cout<<"Enter boy's name :"<<endl;
    getline(cin, boyN);
     cout<<"Enter aura :"<<endl;
    cin>>aura;

    cout<<"This guy has "<<aura<<" aura"<<endl;
    cout<<"This guy's name is "<<boyN<<endl;
    cout<<"This girl's name is "<<girlName<<endl;


    return 0;
}
