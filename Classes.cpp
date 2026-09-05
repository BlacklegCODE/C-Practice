#include<iostream>
using namespace std;

class Person
{
    public:
    string name;
    int age;
    int height;
    string eyeColor;
};
int main()
{
    Person per1;
    per1.name = "Harsh";
    per1.age = 22;
    per1.height = 170;
    per1.eyeColor = "Dark Brown";

    cout<<per1.eyeColor;

    return 0;
}
