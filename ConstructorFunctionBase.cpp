//Trying constructor function

#include<iostream>
using namespace std;

class Book
{
public:
    string title;
    int pages;
    double price;

    Book(string name)
    {
        cout<<name<<endl;
    }
};
int main()
{
    Book aBook("Harsh's Book");
    return 0;
}
