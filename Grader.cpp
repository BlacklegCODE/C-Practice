//4. Function + switch/if-else
//Write string getGrade(int marks):
//returns "A" for 90+, "B" for 75-89, "C" for 50-74, else "F".
//Call it from main() with user input via cin.

#include<iostream>
using namespace std;

string getGrade(int marks)
{
    string grade;
    if(marks>=90)
    {
        grade = "A";
    }
    else if(marks>=75 && marks<=89)
    {
        grade = "B";
    }
    else if(marks>=50 && marks<=74)
    {
        grade = "C";
    }
    else
    {
        grade = "F";
    }
    return grade;
}

int main()
{
    int gr;
    cout<<"Enter grade :"<<endl;
    cin>>gr;

    cout<<getGrade(gr);

    return 0;
}
