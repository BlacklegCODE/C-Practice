#include<iostream>
using namespace std;

string getDay(int a)
{
    string dayName;
    switch(a)
    {
        case 0: dayName = "Sunday";
        break;

        case 1: dayName = "Monday";
        break;

        case 2: dayName = "Tuesday";
        break;

        case 3: dayName = "Wednesday";
        break;

        case 4: dayName = "Thursday";
        break;

        case 5: dayName = "Friday";
        break;

        case 6: dayName = "Saturday";
        break;

        default:cout<<"Invalid input !";

    }
    return dayName;
}




int main()
{
    int x;
    cout<<"Enter any digit from 0 - 6 :";
    cin>>x;

    cout<<getDay(x);

    return 0;
}
