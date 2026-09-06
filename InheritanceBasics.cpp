#include<iostream>
using namespace std;

class Student
{
public:
    void writeEssay()
    {
        cout<<"Student can write small essays!"<<endl;
    }
    void readBook()
    {
        cout<<"Student can read a book!"<<endl;
    }
};

class Teacher : public Student
{
public:
    void writeBetter()
    {
        cout<<"Teacher writes better essays"<<endl;
    }
    void readBook()
    {
        cout<<"Teacher reads books faster"<<endl;
    }
};

int main()
{
    Student stud1;
    stud1.writeEssay();
    stud1.readBook();

    Teacher teach1;
    teach1.readBook();

    return 0;
}
