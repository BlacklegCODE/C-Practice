//Revision of everything till now

#include<iostream>
#include<cmath>

using namespace std;

double calculator(int a, int b)
{
    int add = a +b;
    int sub = a-b;

    return add;
}
void intro()
{
    cout<<"This is my intro!"<<endl;
    cout<<"Hope you like it !!";
}
int main()
{  
    //taking user input
    int num;
    cout<<"Enter a number:";
    cin>>num;
    cout<<num;

    //simple function
    intro();

    //function with return statement
   cout<<calculator(4,3);

   //Trying arrays:
   
   string arr[] = {"red", "blue", "green", "Orange", "pink", "black"};
   cout<<arr[3];

    return 0;
}
//Revision of everything till now

#include<iostream>
#include<cmath>

using namespace std;

double calculator(int a, int b)
{
    int add = a +b;
    int sub = a-b;

    return add;
}
void intro()
{
    cout<<"This is my intro!"<<endl;
    cout<<"Hope you like it !!";
}
int main()
{  
    //taking user input
    int num;
    cout<<"Enter a number:";
    cin>>num;
    cout<<num;

    //simple function
    intro();

    //function with return statement
   cout<<calculator(4,3);

   //Trying arrays:
   
   string arr[] = {"red", "blue", "green", "Orange", "pink", "black"};
   cout<<arr[3];

    return 0;
}
