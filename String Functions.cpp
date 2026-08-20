#include<iostream>

using namespace std;

int main()
{
    string name = "Harsh Raundal";
    cout<<name[6]<<endl;//finds index positions
    cout<<name.find("da",1)<<endl;//Finds the parameter position from given starting point
    cout<<name.substr(3,6);//creates new substring between given parameters
    return 0;
}
